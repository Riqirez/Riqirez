#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin >> a;
    cout << a << '\n';
    if(a<0) cout << "minus" << '\n';

    return 0;
}