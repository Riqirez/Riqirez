#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d,h,m;
    cin >> d >> h >> m;
    
    int result  = (d*24*60 + h*60 + m) - (11*24*60 + 11*60 + 11);
    cout << (result>=0 ? result : -1);

    return 0;
}