#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;
    cout << (a==std::min({a,b,c})) << ' ';
    cout << ((a==b) && (b==c));

    return 0;
}