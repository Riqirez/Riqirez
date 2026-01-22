#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin >> a;
    cout << a*a << '\n';

    if(a<5) cout << "tiny";
    
    return 0;
}