#include <iostream>
using namespace std;

int main(){
    int sum=0;
    string s; cin >> s;

    for(int i : s) sum = sum * 2 + (i - '0');
    cout << sum;
}