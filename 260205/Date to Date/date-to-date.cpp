#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int const arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1,d1,m2,d2,sum=1;
    cin >> m1 >> d1 >> m2 >> d2;
    
    while(1){
        if(m1==m2&&d1==d2) break;

        ++sum;
        ++d1;
        if(d1 > arr[m1]){
            ++m1;
            d1=1;
        }
    }

    cout << sum;
    return 0;
}