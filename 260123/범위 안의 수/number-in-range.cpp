#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    cout << (((a>=10)&&(a<=20)) ? "yes" : "no");

    return 0;
}