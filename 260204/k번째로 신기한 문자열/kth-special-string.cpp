#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string t;

bool compare (const string &a, const string &b){
    bool a_start = (a.compare(0, t.length(), t)==0);
    bool b_start = (b.compare(0, t.length(), t)==0);
    
    if(a_start != b_start) return a_start;

    return a<b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k >> t;

    vector<string> s(n);
    for(int i=0; i<n; i++) cin >> s[i];

    sort(s.begin(), s.end(), compare);

    cout << s[k-1];
    return 0;
}
