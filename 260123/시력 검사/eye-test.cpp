#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b;
    cin >> a >> b;

    if((a>=1.0 && b>=1.0)) cout << "High";
    else if((a>=0.5 && b>=0.5)) cout << "Middle";
    else cout << "Low";

    return 0;
}