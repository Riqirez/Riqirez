#include <iostream>

using namespace std;

void num(int a,int &count) {
	if (a == 0)	return;

	count += (a % 10) * (a % 10);
	num(a / 10, count);
}

int main() {
	int a,count=0;
	cin >> a;

	num(a, count);
	cout << count << endl;
	return 0;
}