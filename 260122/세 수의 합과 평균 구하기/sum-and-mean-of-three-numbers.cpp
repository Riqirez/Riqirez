#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c;
    cin >> a >> b >> c;
    int sum = a+b+c;
    cout << sum << '\n';
    cout << (int)sum / 3 << '\n';

    return 0;
}