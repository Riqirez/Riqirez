#include<iostream>
using namespace std;

int main() {
	int a,b,c,res;
	cin >> a >> b >> c;

	if(a>b) // a가 중앙값
	{
		if (a < c) { cout << a << endl; return 0; }
	}
	if (b > a) // b가 중앙값
	{
		if (b < c) { cout << b << endl; return 0; }
	}
	if (c > a) // c가 중앙값
	{
		if (c < b) { cout << c << endl; return 0; }
	}
	

	return 0;
}