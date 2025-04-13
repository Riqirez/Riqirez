#include <iostream>

using namespace std;

int f(int n) {
	if (n < 1) return 0;

	return f(n/10) + (n%10);
}
int main() {
	int a, b, c;

	cin >> a >> b >> c;

	cout << f(a*b*c) << endl;

	return 0;
}