#include <iostream>

using namespace std;


int sum(int a) {
	if (a == 1) return 1;
	if (a == 2) return 1;
	
	return sum(a - 1) + sum(a - 2);
}


int main() {
	int b;
	cin >> b;
	cout << sum(b);
	return 0;
}