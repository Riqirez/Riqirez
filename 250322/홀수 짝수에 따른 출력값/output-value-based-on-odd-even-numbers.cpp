#include <iostream>

using namespace std;

int sum1(int n) {
	if (n == 1) return 1; //종료조건
	return n + sum1(n - 2);
}

int sum2(int n) {
	if (n == 2) return 2; //종료조건
	return n + sum2(n - 2);
}

int main() {
	int a;
	cin >> a;

	if (a % 2 == 0)cout << sum2(a) << endl;
	else if (a % 2 == 1) cout<< sum1(a) << endl;

	return 0;
}