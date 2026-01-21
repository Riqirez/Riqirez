#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    float sum = a+b;

    cout << sum << ' ' << (double)sum / 2;

    return 0;
}