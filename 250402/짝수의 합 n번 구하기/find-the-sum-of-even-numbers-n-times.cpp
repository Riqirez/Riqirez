#include <iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	cin >> n;
	int a[10], b[10];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= b[i];j++)
		{
			if (j >= a[i] && j % 2 == 0) sum += j;
		}
		cout << sum << '\n';
		sum = 0;
	}

	return 0;
}