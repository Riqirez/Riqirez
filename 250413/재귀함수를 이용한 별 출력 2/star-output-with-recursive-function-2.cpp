#include <iostream>

using namespace std;

int N;

void f(int n) {
    if (n == 0) return;
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << '\n';
    f(n - 1);
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << '\n';
}

int main() {
    cin >> N;
    f(N);
    return 0;
}