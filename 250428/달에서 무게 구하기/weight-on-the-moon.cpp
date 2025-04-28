#include <iostream>
using namespace std;

int main() {
    int w=13;
    float g = 0.165;
    cout << fixed;
    cout.precision(6) << w << " * " << g << " = "<<w*g;
    return 0;
}