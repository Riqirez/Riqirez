#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,sum=0;
    cin >> a >> b >> c;

    while(1){
        if(a==b&&b==c&&c==11) break;
        if(c<0){
            --b;
            c=59;
        }
        if(b<0){
            b=23;
            c=59;
            --a;
        }
        --c;
        ++sum;
    }

    cout << sum;
    return 0;
}