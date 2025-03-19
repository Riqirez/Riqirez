#include <iostream>

using namespace std;

int main() {
	unsigned short a, b;
	cin >> a >> b;
	int A[10] = {a,b};


	for (int i = 2; i < 10; i++ )
	{
		A[i] = ((A[i-1] + A[i - 2]) % 10);
	}
	for (int i = 0; i < 10; i++) {
		cout << A[i] << ' ';
	}
	return 0;
}