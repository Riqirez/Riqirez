#include<iostream>
using namespace std;

int main() {
	int a,b,c,res;
	cin >> a >> b >> c;

	if( (a>b && a<c) || (a>c && a<b) )// a가 중앙값
	{
		cout << a << endl;
	}
	else if ((b > a && b < c) || (b > c && b < a)) // b가 중앙값
	{
		cout << b << endl;
	}
	else if ((c > b && c < a) || (c > a && c < b)) // c가 중앙값
	{
		cout << c << endl;
	}

	return 0;
}