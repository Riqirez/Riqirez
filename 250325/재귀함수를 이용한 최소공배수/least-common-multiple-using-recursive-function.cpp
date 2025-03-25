#include <iostream>
using namespace std;

int A[10] = {};

int h(int a, int b) {
    if (b == 0) return a;
    return h(b, a % b);
}

int g(int a, int b) {
    return (a / h(a, b)) * b;
}


int f(int n) {
    if (n == 1) return A[0];
    return g(f(n - 1), A[n - 1]);
}
int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    cout << f(a) << endl;
    return 0;
}
