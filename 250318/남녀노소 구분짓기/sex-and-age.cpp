#include<iostream>
using namespace std;

int main() {
	int sex;
	int age;
	cin >> sex >> age;
	if (sex == 0) {
		if (age > 18)
		{
			cout << "MAN";
		}
		else
		{
			cout << "BOY";
		}
	}
	else if (sex == 1) {
		if (age > 18)
		{
			cout << "WOMAN";
		}
		else
		{
			cout << "GIRL";
		}
	}
	
	return 0;
}