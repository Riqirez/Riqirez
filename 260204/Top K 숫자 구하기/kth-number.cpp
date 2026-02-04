#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int>v(N);
    
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    cout << v[K-1];

    return 0;
}
