#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, cnt=0, PT = 1000;
    int arr[2000] = {0};
    cin >> N;
    
    while(N--){
        int x;
        char y;
        cin >> x >> y;
        if(y=='R') while(x--) ++arr[PT++];
        else while(x--) ++arr[--PT];
    }

    for(int i=0; i<2000; i++) if(arr[i]>=2) ++cnt;

    cout << cnt;
    return 0;
}