#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    if(a==5) cout << 'A';
    if(a%2==0) cout << 'B';


    return 0;
}