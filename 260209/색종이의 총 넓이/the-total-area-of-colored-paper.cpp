#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int arr[201][201]={};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    while(N--){
        int x,y;
        cin >> x >> y;
        x+=100; y+=100;
        for(int i=x; i<x+8; i++){
            for(int j=y; j<y+8; j++){
                arr[j][i]=1;
            }
        }
    }

    int cnt=0;
    for(int x=0; x<201; x++){
        for(int y=0; y<201; y++){
            if(arr[y][x]) ++cnt;
        }
    }
    cout << cnt;
    return 0;
}