#include <iostream>

using namespace std;

int N;
void hi(int a) {
    if (a == 0) return;

    cout << "HelloWorld" << '\n';
    return hi(a - 1);
}

int main() {
    cin >> N;
    hi(N);
    return 0;
}