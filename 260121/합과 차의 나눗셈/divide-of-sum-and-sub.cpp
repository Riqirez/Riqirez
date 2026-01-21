#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    float sum = a+b;
    float sub = a-b;
    cout.fixed;
    cout.precision(3);

    cout << sum / sub;

    return 0;
}