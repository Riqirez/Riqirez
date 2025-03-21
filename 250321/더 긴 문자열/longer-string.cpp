#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
	cin >> a >> b;
	if (a.length() > b.length())
	{
		cout << a << ' ' << a.length() << endl;
	}
	else if (b.length() > a.length())
	{
		cout << b << ' ' << b.length() << endl;
	}
	else if (a.length() == b.length()) {
		cout << "same" << endl;
	}
	return 0;
}