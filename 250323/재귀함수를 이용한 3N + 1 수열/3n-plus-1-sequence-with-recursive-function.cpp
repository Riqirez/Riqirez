#include <iostream>

using namespace std;

int cnt;

int sum(int n) {
	if (n == 1) return 0;
	if (n % 2 == 0) {
		cnt++;
		return sum(n / 2);
	}
	if (n % 2 == 1) {
		cnt++;
		return sum(n * 3 + 1);
	}
}

int main() {
	int N;
	cin >> N;
	sum(N);
	cout << cnt << endl;
	return 0;
}