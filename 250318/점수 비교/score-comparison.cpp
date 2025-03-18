#include<iostream>
using namespace std;

int main() {
	int a, b;
	int A, B;
	cin >> a >> b;
	cin >> A >> B;
	if (a > A && b > B)
	{
		cout << '1';
	}
	else { cout << '0'; }

	return 0;
}