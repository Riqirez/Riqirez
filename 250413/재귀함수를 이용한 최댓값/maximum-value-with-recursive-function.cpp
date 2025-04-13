#include <iostream>

using namespace std;

int n;
int arr[100];
int m = 0;

int max(int n) {
    if (n < 0) return m;

    if (arr[n] > m) {
        m = arr[n];
    }

    return max(n - 1);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << max(n) << endl;
    return 0;
}