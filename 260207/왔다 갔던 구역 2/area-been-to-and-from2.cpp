#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int PT = 1000;
    int arr[2000] = {0};
    int N;
    cin >> N;
    while(N--){
        int x;
        char y;
        cin >> x >> y;
        if(y=='R'){
        for(int i=PT; i<PT+x; i++) ++arr[i];
        }
        else{
        for(int i=PT; i>PT-x; i--) ++arr[i];
        }
    }

    cout << *max_element(arr,arr+2000);
    return 0;
}