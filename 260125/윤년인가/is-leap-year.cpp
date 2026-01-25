#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y;
    cin >> y;
    cout << boolalpha << ((y%4==0)&&((y%100!=0)||(y%400==0)));
    return 0;
}