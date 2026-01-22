#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int h,w;
    cin >> h >> w;
    int b = 10000*w / (h*h);
    cout << b << '\n';

    if(b >= 25) cout << "Obesity";
    
    return 0;
}