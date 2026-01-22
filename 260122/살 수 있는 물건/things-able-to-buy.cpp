#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if(n>=3000) cout << "book";
    else if(n>=1000) cout << "mask";
    else cout << "no";
    
    return 0;
}