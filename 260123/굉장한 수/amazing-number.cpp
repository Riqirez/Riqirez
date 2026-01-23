#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    cout << boolalpha;
    cout << (((a%2==1) && (a%3==0)) || ((a%2==0) && (a%5==0)));
    return 0;
}