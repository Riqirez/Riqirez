#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,max=0,b=3;
    while(b--) {
        cin >> a;
        if(a>max) max = a;
    }
    cout << max;
    return 0;    
}