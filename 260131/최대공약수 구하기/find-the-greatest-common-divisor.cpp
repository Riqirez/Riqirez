#include <iostream>

using namespace std;

void myswap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int GCD(int a, int b){
    int result=0;
    if(a>b) myswap(a,b);
    for(int i=1; i<=a; i++){
        if(a%i==0&&b%i==0&&result<i) result = i;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a,b;
    cin >> a >> b;
    cout << GCD(a,b);

    return 0;
}