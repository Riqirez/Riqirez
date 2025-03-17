#include <iostream>

using namespace std;

int main() {
	unsigned short a;
	int b=0;
	cin >> a;
	for (int i = 0; i <= a; i++)
	{
		b += i;
	}

	cout << b << endl;

	return 0;
}