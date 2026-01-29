#include <iostream>

using namespace std;

void myswap(int &small, int &big){
    if(small > big){
        small*=2;
        big+=25;
    }
    else{
    big*=2;
    small+=25;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s,b;
    cin >> s >> b;
    myswap(s,b);
    cout << s << ' ' << b;

    return 0;
}