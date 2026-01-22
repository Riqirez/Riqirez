#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char a;
    cin >> a;
    switch(a){
        case 'S':
        cout << "Superior";
        break;
        case 'A':
        cout << "Excellent";
        break;
        case 'B':
        cout << "Good";
        break;
        case 'C':
        cout << "Usually";
        break;
        case 'D':
        cout << "Effort";
        break;

        default:
        cout << "Failure";
    }
    return 0;
}