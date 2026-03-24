#include <iostream>
using namespace std;

int main() {
	int t, a0, a1, a2, a3, a4;
	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> a0>> a1>>a2 >> a3;
		if ((a1-a0)==(a2-a1)) {
			a4 = a3 + (a2-a1);
		}else {
			a4 = a3* (a2/a1);
		}
		cout << a0 <<" \n " << a1 <<" \n " << a2 <<" \n " << a3 <<" \n " << a4 <<" \n "

	}
	return 0;
}
