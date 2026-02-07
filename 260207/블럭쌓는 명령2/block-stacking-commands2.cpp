#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    vector<int>v(N+1);
    while(K--){
        int start, end;
        cin >> start >> end;
        for(int i=start; i<=end; i++) ++v[i];
    }

    int max=0;
    for(int i=0; i<=N; i++) if(v[i]>max) max = v[i];
    
    cout << max;
    return 0;
}