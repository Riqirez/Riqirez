#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int n = 2*N;
    vector<int>v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int result=-1;
    for(int i=0; i<n; i++){
        int sum = v[i]+v[n-i-1];
        if(sum > result) result = sum;
    }

    cout << result;
    return 0;
}
