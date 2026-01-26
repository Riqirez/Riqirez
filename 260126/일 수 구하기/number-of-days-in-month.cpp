#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    if(n==2) {
        cout << 28;
        return 0;
    }
    cout << (n%2==0 ? 30 : 31);
    return 0;
}