#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	while (1) {
		cout << a << ' ';

		if (a % 2 == 0) a += 3;
		else if (a % 2 == 1) a *= 2;

		if (a > b) break;
	}
	return 0;
}