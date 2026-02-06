#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int>v;
    v.reserve(20);

    while(1){
        if(n<2){
            v.emplace_back(n);
            break;
        }
        v.emplace_back(n%2);
        n/=2;
    }

    for(int i=v.size()-1; i>=0; --i) cout << v[i];
    return 0;
}