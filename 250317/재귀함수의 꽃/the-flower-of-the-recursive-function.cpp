#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cout << a - i + 1 << ' ';
	}
	for (int i = 1; i <= a; i++) {
		cout << i << ' ';
	}

	return 0;
}