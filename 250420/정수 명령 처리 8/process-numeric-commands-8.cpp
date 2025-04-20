#include <iostream>
#include <list>

using namespace std;

int n;
string order[10000];
int num[10000];
list<int> l;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> order[i];
            if(order[i] == "push_front") {
                cin >> num[i];
                l.push_front(num[i]);
            }
            else if (order[i] == "push_back") {
                cin >> num[i];
                l.push_back(num[i]);
            }
            else if (order[i] == "pop_front") {
                cout << l.front() << endl;
                l.pop_front();
            }
            else if (order[i] == "pop_back") {
                cout << l.back() << endl;
                l.pop_back();
            }
            else if (order[i] == "size") {
                cout << l.size() << endl;
            }
            else if (order[i] == "empty") {
                if (l.size() == 0) cout << '1' << endl;
                else cout << '0' << endl;
            }
            else if (order[i] == "front") {
                cout << l.front() << endl;
            }
            else if (order[i] == "back") {
                cout << l.back() << endl;
            }
    }

    return 0;
}
