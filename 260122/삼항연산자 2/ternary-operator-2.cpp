#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int score;
    cin >> score;
    cout << (score==1 ? "t" : "f" );
    return 0;
}