#include <iostream>
using namespace std;
const int MAX_N = 1000001;
char input[MAX_N], output[MAX_N];
// Node
struct Node {
	char data;
	Node *next;
	Node *prev;
};
Node* initNode(char data = '\0') {
	Node* node = new Node;
	node->data = data;
	node->next = NULL;
	node->prev = NULL;
	return node;
}
// List
struct List {
	Node* root;
	Node* current;
};
List* initList() {
	List* list = new List;
	list->root = initNode();
	list->current = list->root;
	return list;
}
void deleteList(List *list) {
	Node *root = list->root;

	while(root->next != NULL) {
		Node* tmp = root->next;
		root->next = root->next->next;
		delete tmp;
	}
	delete root;
	delete list;
}
void moveLeft(List *list) {
	Node *p = list->current->prev;
	if (p) list->current = p;
}
void moveRight(List *list) {
	Node *p = list->current->next;
	if (p) list->current = p;
}
void backspace(List *list) {
	if (list->current->prev) {
		Node *curr = list->current;
		Node *prev = curr->prev;
		Node *next = curr->next;
		if (prev) prev->next = next;
		if (next) next->prev = prev;
		list->current = prev;
		delete curr;
	}
}
void addItem(List *list, char data) {
	Node* node = initNode(data);
	Node* next = list->current->next;
	list->current->next = node;
	node->prev = list->current;
	node->next = next;
	if (next) next->prev = node;
	list->current = node;
}
void build(List *list, char *output) {
	Node *p = list->root;
	int index = 0;
	while(p->next != NULL) {
		output[index] = p->next->data;
		p = p->next;
		index++;
	}
	output[index] = '\0';
}
void getPassword(List *list, char* output, char* input) {
	int index = 0;
	char current = '\0';
	while(true) {
		current = input[index];
		if (current == '\0') break;

		if (current == '<') {
			moveLeft(list);
		} else if (current == '>') {
			moveRight(list);
		} else if (current == '-') {
			backspace(list);
		} else {
			addItem(list, current);
		}
		index++;
	}
	build(list, output);
}
int main() {
	ios::sync_with_stdio(false);
    List *list = initList();
    cin >> input;
    getPassword(list, output, input);
    cout << output << endl;
    deleteList(list);
}
