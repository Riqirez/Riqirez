#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const string table = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int a, b, sum=0;
    string n = "";
    string s = "";
    cin >> a >> b >> n;

    reverse(n.begin(), n.end());
    while(n.size()){
        sum = sum*a + (table[n[n.size()-1]%a]-'0');
        n.pop_back();
    }

    while(sum){
        s.push_back(sum%b + '0');
        sum/=b;
    }
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}