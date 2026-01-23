#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    cout << ((a%13==0 || a%19==0) ? "True" : "False");
    return 0;
}