#include <iostream>
using namespace std;

int main() {
	int i,n;
	cin >> n;
	i = n;
	for(int j=0; j<n; j++){	//반복횟수 n번
		for (int k=i; k>0 ; k--) {
			cout << "* ";
		}
		cout << '\n';
		i--;
	}
	return 0;
}