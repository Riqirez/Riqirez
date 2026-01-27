#include <iostream>

using namespace std;

void star(int n){
    while(n--)cout << "12345^&*()_" << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    star(n);
    
    return 0;
}
