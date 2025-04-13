#include <iostream>

using namespace std;

int N;

void back(int n) {
    for (int i = n; i > 0; i--) {
        cout << i << ' ';
    }
    return;
}


void front(int n) {
    if (n == 0) return;

    for (int i = 1; i <= n; i++) {
        cout << i << ' ';
    }
    cout << '\n';
    back(n);
}

int main() {
    cin >> N;
    front(N);
    return 0;
}