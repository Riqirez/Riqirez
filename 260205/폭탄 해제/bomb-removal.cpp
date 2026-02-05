#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Order{
    string code;
    char color;
    int time;

    Order(const string &cd, char c, int t) : code(cd), color(c), time(t){};
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string code;
    char color;
    int time;
    cin >> code >> color >> time;
    Order a(code ,color, time);

    cout << "code : " << a.code << '\n';
    cout << "color : " << a.color << '\n';
    cout << "second : " << a.time << '\n';
    
    return 0;
}