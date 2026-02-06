#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b, ptr=0;
    cin >> n >> b;
    string s;
    s.reserve(20);

    const string table = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    while(n>0){
        s.push_back(table[n%b]);
        n/=b;
    }

    reverse(s.begin(), s.end());

    cout << s;
    return 0;
}