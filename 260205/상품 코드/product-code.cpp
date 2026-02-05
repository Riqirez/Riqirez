#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Product{
    string name;
    int code;

    Product(const string &s, int c):name(s), code(c){};

    void my_print()const{ cout << "product " << code << " is " << name << '\n'; }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int c;
    cin >> s >> c;

    Product const p1("codetree", 50);
    Product p2(s,c);

    p1.my_print();
    p2.my_print();

    return 0;
}