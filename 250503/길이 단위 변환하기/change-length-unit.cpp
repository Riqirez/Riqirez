#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout << precision(1);
    cout << "9.2ft = " << 9.2*30.48 << "cm" << '\n';
    cout << "1.3mi = " << 160934*1.3 << "cm" << '\n';
    
    return 0;
}