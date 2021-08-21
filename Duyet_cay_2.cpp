#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left, *right;
    node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

int search(int* a, int begin, int end, int data) {
    for (int i = begin; i <= end; ++i)
        if (a[i] == data) return i;
    return -1;
}

void printarr(int* a, int n) {
    for (int i = 0; i < n; ++i)
        cout << a[i] << ' ';
    cout << '\n';
}

node* levelOrder(int n, int* level, int* in, int begin, int end) {
    if (n <= 0) return NULL;
    node* root = new node(level[0]);
    if (begin == end) return root;
    int index = search(in, begin, end, root->data);
    int* llevel = new int[index - begin];
    int* rlevel = new int[end - index];
    int rj = 0, lj= 0;
    for (int i = 1; i < n; ++i) {
        if (search(in, 0, index, level[i]) == -1) {
            rlevel[rj] = level[i];
            rj++;
        } else {
            llevel[lj] = level[i];
            lj++;
        }
    }
    if (index - begin > 0) root->left = levelOrder(index - begin, llevel, in, begin, index - 1);
    if (end - index > 0) root->right = levelOrder(end - index, rlevel, in, index + 1, end);
    delete[] llevel;
    delete[] rlevel;
    return root;
}

void printPostorder(node* root) {
    if (root == NULL) return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int in[n];
        for (int i = 0; i < n; ++i)
            cin >> in[i];
        int level[n];
        for (int i = 0; i < n; ++i)
            cin >> level[i];
        node* post = levelOrder(n, level, in, 0, n - 1);
        printPostorder(post);
        cout << '\n';
        delete post;
    }
}

int main() {
    solve();
}
