#include <iostream>
using namespace std;

int main() {
	int N,i=1, count=0;
	cin >> N;
	for (i; i <= N;i++) {
		count += i;
		if (count >= N) break;
	}
	cout << i << endl;
}