#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    cout << (a%3==0 || a%5==0);
    return 0;
}