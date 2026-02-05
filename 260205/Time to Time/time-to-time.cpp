#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,d;
    cin >> a >> b >> c >> d;
    b+=(a*60);
    d+=(c*60);
    cout << d - b;

    return 0;
}