#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cout << i << ' ';
    }
    cout << '\n';

    while (a >= 1) {
        cout << a << ' ';
        a--;
    }
    return 0;
}