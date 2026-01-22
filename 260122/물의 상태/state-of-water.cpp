#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if(n<0) cout << "ice";
    else if(n<100) cout << "water";
    else cout << "vapor";
    
    return 0;
}