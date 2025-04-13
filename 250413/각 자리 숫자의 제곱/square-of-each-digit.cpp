#include <iostream>

using namespace std;

int N;

int f(int n) {
    if (n <= 1) return 0;
    return f(n / 10) + (n % 10)* (n % 10);
}

int main() {
    cin >> N;
    cout << f(N) << endl;
    return 0;
}