#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if(a>=90){
        if(b>=95) {
            cout << 100000;
            return 0;
        }
        else if(b>=90) {
            cout << 50000;
            return 0;
        }
    }

    cout << 0;
    return 0;
}