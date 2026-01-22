#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    
    cout << (a%3 ? "NO" : "YES");
    cout << '\n';
    cout << (a%5 ? "NO" : "YES");
    
    return 0;
}