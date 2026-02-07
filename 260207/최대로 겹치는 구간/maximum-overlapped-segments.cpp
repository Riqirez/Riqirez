#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int T = 100;
    int arr[200] = {0};
    int N;
    cin >> N;
    while(N--){
        int x, y;
        cin >> x >> y;
        for(int i=x+T; i<y+T; i++) ++arr[i];
    }

    cout << *max_element(arr,arr+200);
    return 0;
}