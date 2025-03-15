#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float e, m;
    e = 13;
    m = 0.165;

    cout << e << " * ";
    cout << fixed << setprecision(6) << m << " = " << e * m;

    return 0;
}