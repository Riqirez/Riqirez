#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct meet{
    string code;
    string where;
    short time;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    meet v;
    cin >> v.code >> v.where >> v.time;
    cout << "secret code : " << v.code << '\n';
    cout << "meeting point : " << v.where << '\n';
    cout << "time : " << v.time << '\n';
    
    return 0;
}