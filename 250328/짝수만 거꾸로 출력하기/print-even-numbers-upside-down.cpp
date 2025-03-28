#include <iostream>
using namespace std;

int main() {
	int a,b=0;
	int arr[100] = {};
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
		b++;
	}
	b--;
	while(b >= 0) {
		if (arr[b] % 2 == 0) {
			cout << arr[b] << ' ';
		}
		b--;
	}
	return 0;
}