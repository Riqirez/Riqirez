#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s;
    
    return 0;
}