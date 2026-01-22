#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c;
    cin >> a >> b >> c;
    int sum = a+b+c;
    int avg = sum/3;
    cout << sum << '\n';
    cout << avg << '\n';
    cout << sum-avg;

    return 0;
}