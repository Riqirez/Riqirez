#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int sum = a+b;
    int sub = a-b;
    cout.fixed;
    cout.precision(3);

    cout << (float)sum / sub;

    return 0;
}