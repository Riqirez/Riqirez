#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> word(n);
    for(int i=0; i<n; i++) cin >> word[i];

    sort(word.begin(), word.end());
    for(int i=0; i<n; i++) cout << word[i] << '\n';

    return 0;
}