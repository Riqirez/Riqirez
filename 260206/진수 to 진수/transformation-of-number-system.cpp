#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const string table = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int a, b;
    long long sum=0;
    string n = "";
    string s = "";
    cin >> a >> b >> n;

    for(int i: n) sum = sum*a + (i - '0');

    while(sum){
        s.push_back(sum%b + '0');
        sum/=b;
    }
    reverse(s.begin(), s.end());
    std::cout << s;
    return 0;
}