#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct BW { int b=0, w=0; };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, pos = 50000;
    cin >> N;
    vector<BW>v(100000);

    while(N--){
        int x;
        char head;
        cin >> x >> head;
        if(head == 'R') for(int i=0; i<x; i++) v[pos++].b++;
        else for(int i=x; i>0; i--) v[--pos].w++;
    }

    int black=0, white=0, gray=0;

    for(int i=0; i<100000; i++){
        if(v[i].b==0&&v[i].w==0) continue;
        
        if(v[i].b>=2&&v[i].w>=2) ++gray;
        
        else if(v[i].b == v[i].w) i>50000 ? ++white : ++black;

        else (v[i].b > v[i].w ? ++black : ++white);
    }

    cout << white << ' ' << black << ' ' << gray;
    return 0;
}