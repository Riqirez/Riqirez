#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum=0;
    string s, res;
    cin >> s;
    for(int i : s) sum = sum*2 + (i-'0');

    sum *= 17;

    while(sum>0){
        res.push_back(sum%2 + '0');
        sum /=2;
    }
    reverse(res.begin(), res.end());
    cout << res;
    return 0;
}