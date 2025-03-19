#include <iostream>
using namespace std;

int main() {
	int i;
	cin >> i;
	int a[100] = {};
	for (int j = 0; j < i; j++) {
		cin >> a[j];
	}
	for (int j = 0; j < i; j++) {
		cout << a[j]*a[j]<< ' ';
	}
}