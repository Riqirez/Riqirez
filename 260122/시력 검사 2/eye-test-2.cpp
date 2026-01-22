#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float n;
    cin >> n;

    if(n>=1) cout << "High";
    else if(n>=0.5) cout << "Middle";
    else cout << "Low";
    
    return 0;
}