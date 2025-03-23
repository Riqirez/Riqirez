#include <iostream>
using namespace std;

int sequence(int n) {
    int a[20] = { 2, 4 };

    for (int i = 2; i < n; i++) {
        a[i] = (a[i - 1] * a[i - 2]) % 100;
    }
    return a[n - 1];
}

int main() {
    int N;
    cin >> N;
    cout << sequence(N) << endl;
    return 0;
}