#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,d,e;
    cin >> a;
    cin >> b >> c >> d >> e;
    cout << (a>b) << '\n';
    cout << (a>c) << '\n';
    cout << (a>d) << '\n';
    cout << (a>e);

    return 0;
}