#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int l,s,tmp;
    
    cin >> l >> s;
    if(s>l){
        tmp = s;
        s=l;
        l=tmp;
    }
    cout << l-s;

    return 0;
}