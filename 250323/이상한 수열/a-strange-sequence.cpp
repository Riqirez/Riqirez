#include <iostream>
using namespace std;

int memo[16];

int f(int N) {
    if (memo[N] != 0) return memo[N];

    if (N == 1) {
        return 1;
    }
    if (N == 2) {
        return 2;
    }

    memo[N] = f(N / 3) + f(N - 1);

    return memo[N];
}

int main() {
    int N;
    cin >> N;
    cout << f(N) << endl;
    return 0;
}
