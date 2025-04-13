#include <iostream>

using namespace std;

int N;

void star(int n) {
    if (n == 0) return;

    star(n - 1);
    for (int i = 0; i < n; i++) cout << '*';
    cout << '\n';
}

int main() {
    cin >> N;
    star(N);
    return 0;
}