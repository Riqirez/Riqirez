#include<iostream>
using namespace std;

int main() {
	int a, b;
	float avg;

	cin >> a >> b;
	cout << a + b << ' ';
	avg = (a + b) / 2.0;
	cout << fixed;
	cout.precision(1);
	cout << avg << endl;

	return 0;
}