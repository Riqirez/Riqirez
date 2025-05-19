#include <iostream>

using namespace std;

int main(){
    float n;
    cin >> n;
    cout << fixed;
    cout.precision(1);
    cout << 30.48 * n << endl;
    return 0;
}
