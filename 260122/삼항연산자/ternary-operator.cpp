#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int score;
    cin >> score;
    cout << (score!=100 ? "failure" : "pass" );
    return 0;
}