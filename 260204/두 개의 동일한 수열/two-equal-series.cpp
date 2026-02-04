#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    bool chk = 1;
    vector<int>v1(n), v2(n);

    for(int i=0; i<n; i++) cin >> v1[i];
    for(int i=0; i<n; i++) cin >> v2[i];
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    for(int i=0; i<n; i++) if(v1[i] != v2[i]) chk = 0;

    cout << (chk ? "Yes" : "No");

    return 0;
}
