#include <iostream>

using namespace std;

void swap(int &small, int &big){
    if(small > big){
        int temp=small;
        small = big;
        big = temp;
    }
    small*=2;
    big+=25;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s,b;
    cin >> s >> b;
    swap(s,b);
    cout << s << ' ' << b;

    return 0;
}