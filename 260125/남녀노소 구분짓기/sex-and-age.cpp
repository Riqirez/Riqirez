#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int man,age;
    cin >> man >> age;
    cout << (man==0 ? (age>18 ? "MAN" : "BOY") : (age>18 ? "WOMAN" : "GIRL"));
    
    return 0;
}