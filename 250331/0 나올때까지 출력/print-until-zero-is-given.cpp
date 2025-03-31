#include <iostream>
using namespace std;

int main() {
	int arr[100] = {};
	int a,last;
	for (int i = 0; i < 100; i++) {
		cin >> a;
		if (a == 0) {
			last = i;
			break;
		}
		arr[i] = a;
	}
	
	for (int i = 0; i < last; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}