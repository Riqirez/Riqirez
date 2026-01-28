#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for(int i=0; i<s.length()/2; i++){
        if(s[i]!=s[s.length()-i-1]) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

    return 0;
}