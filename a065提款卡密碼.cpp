#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	// 字元: P O K E M O N
	// 索引: 0 1 2 3 4 5 6
	for (int i =0; i < s,size() - 1; i++) {
		int distant = abs(s[i] - s[i+1]);
		cout << distant;
	}
	cout << endl;
	return 0;
}
