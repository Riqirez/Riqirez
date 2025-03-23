#include <iostream>

using namespace std;

int sum(int n) {
	if (n == 0) return 0;
	return sum(n / 10) + (n % 10);
}

int main() {
	int a, b, c, mul;
	cin >> a >> b >> c;
	mul = a * b * c;

	cout << sum(mul) << endl;
	return 0;
}