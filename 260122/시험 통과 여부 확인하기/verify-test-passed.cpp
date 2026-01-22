#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int score;
    cin >> score;
    if(score >=80) cout << "pass";
    else cout << 80-score << " more score";
    
    return 0;
}