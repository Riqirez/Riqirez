#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	int bk = a;

	for (int j = 0; j < a; j) 
	{
		for (int i = 0; a > i; i++)
		{
			cout << "* ";
		}
		cout << '\n';
		a = a - 1;
	}
	a = bk;

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << '\n';
	}

	return 0;
}