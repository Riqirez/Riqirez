#include<iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;

	while (a > 1) {
		cout << a << endl;
		a = a / b;
	}
	return 0;
}