#include <iostream>

using namespace std;

int cnt = 0;

int sum(int a)
{
	if (a == 1) {
		return 0;
	}
	if (a % 2 == 0)
	{
		cnt++;
		return sum(a / 2);
	}
	else {
		cnt++;
		return sum(a / 3);
	}
}


int main() {
	int N;
	cin >> N;
	sum(N);

	cout << cnt << endl;
	return 0;

}