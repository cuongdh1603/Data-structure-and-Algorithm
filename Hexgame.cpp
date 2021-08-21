#include<bits/stdc++.h>
using namespace std;
string first;
string start_left(string s) {
	return { s[3],s[0] ,s[2] ,s[7] ,s[4] ,s[1] ,s[6] ,s[8] ,s[5] ,s[9] };
}
string start_right(string s) {
	return { s[0],s[4] ,s[1] ,s[3] ,s[8] ,s[5] ,s[2] ,s[7] ,s[9] ,s[6] };
}
string end_right(string s) {
	return { s[0], s[2], s[6], s[3], s[1],s[5], s[9], s[7], s[4], s[8] };
}
string end_left(string s) {
	return { s[1], s[5], s[2], s[0], s[4],s[8], s[6], s[3], s[7], s[9] };
}
int count(string s) {
	string x;
	queue<string>end,start;
	end.push(s);
	map<string, int> ans_e,ans_s;
	set<string> check1;
	check1.insert(s);
	while (!end.empty()) {
		x = end.front();
		end.pop();
		if (check1.find(start_left(x)) == check1.end()) {
			end.push(start_left(x));
			check1.insert(start_left(x));
			ans_e[start_left(x)] = ans_e[x] + 1;
		}
		if (check1.find(start_right(x)) == check1.end()) {
			end.push(start_right(x));
			check1.insert(start_right(x));
			ans_e[start_right(x)] = ans_e[x] + 1;
		}
		if (ans_e[end.back()] > 13) break;
	}
	check1.clear();
	start.push(first);
	while (!start.empty()) {
		x = start.front();
		start.pop();
		if (ans_e[x]) return ans_e[x] + ans_s[x];
		if (check1.find(end_left(x)) == check1.end()) {
			start.push(end_left(x));
			check1.insert(end_left(x));
			ans_s[end_left(x)] = ans_s[x] + 1;
		}
		if (check1.find(end_right(x)) == check1.end()) {
			start.push(end_right(x));
			check1.insert(end_right(x));
			ans_s[end_right(x)] = ans_s[x] + 1;
		}
	}
}
int main() {
	int t;
	cin>>t;
	while (t--) {
		string s="";
		first = "1238004765";
		char x;
		for (int i = 0; i < 10; i++) cin >> x, s += x;
		cout << count(s) << endl;
	}
}