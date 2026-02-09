#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void ps(int &t){ 
    t+=100;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[201][201]={};
    int N;
    cin >> N;
    while(N--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        ps(a); ps(b); ps(c); ps(d);
        for(int y=b; y<d; y++){
            for(int x=a; x<c; x++){
                arr[y][x] = 1;
            }
        }
    }
    int cnt=0;
    for(int y=0; y<201; y++){
        for(int x=0; x<201; x++){
            if(arr[y][x]) cnt++;
        }
    }

    cout << cnt;
    return 0;
}