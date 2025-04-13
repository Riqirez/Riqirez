#include <iostream>

using namespace std;

int N;

int f(int n) {
    if (n == 1) return 1;
    return f(n - 1) + n;
}

int main() {
    cin >> N;
    cout << f(N) << endl;
    return 0;
}