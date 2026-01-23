#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char win;
    int am, ae, bm, be;
    cin >> am >> ae >> bm >> be;
    
    if(am!=bm) win = (am>bm ? 'A' : 'B');
    else win = (ae>be ? 'A' : 'B');
    
    cout << win;

    return 0;
}