#include <iostream>

using namespace std;

int N;

int f(int n) {
    if (n <= 1) return 0;

    if (n % 2==0) {
        return f(n / 2)+ 1;
    }
    else {
        return f(n / 3) +1;
    }
}

int main() {
    cin >> N;
    cout << f(N) << endl;
    return 0;
}