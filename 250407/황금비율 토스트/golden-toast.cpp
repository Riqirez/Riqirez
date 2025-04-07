#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;
string s;

int main() {
    cin >> n >> m;
    cin >> s;

    list<char> lst;
    for (char c : s) lst.push_back(c);

    auto cursor = lst.end();

    for (int i = 0; i < m; i++) {
        char cmd;
        cin >> cmd;

        if (cmd == 'L') {
            if (cursor != lst.begin()) cursor--;
        } else if (cmd == 'R') {
            if (cursor != lst.end()) cursor++;
        } else if (cmd == 'D') {
            if (cursor != lst.end()) cursor = lst.erase(cursor);
        } else if (cmd == 'P') {
            char ch;
            cin >> ch;
            cursor = lst.insert(cursor, ch);
            cursor++;
        }
    }

    for (char c : lst) cout << c;
    cout << "\n";

    return 0;
}
