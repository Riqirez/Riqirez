#include <iostream>

using namespace std;

int N;

int hol(int n) {
    if (n == 1) return 1;
    return hol(n - 2) + n;
}

int zzak(int n) {
    if (n == 2) return 2;
    return zzak(n - 2) + n;
}

int f(int n) {
    if (n == 0) return 0;
    if (n % 2) return hol(n);
    else return zzak(n);
}


int main() {
    cin >> N;
    cout << f(N) << endl;
    return 0;
}