#include <iostream>
#include <vector>

using namespace std;

int N;
string command[10000];
int num[10000];
vector<int> v;

void pushb(int *a);
void popb();
void sz();
void gt(int *a);

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> command[i];

        if (command[i] == "push_back") {
            cin >> num[i];
            pushb(&num[i]);
            }
        else if (command[i] == "pop_back") popb();
        else if (command[i] == "size") sz();
        else if (command[i] == "get") {
            cin >> num[i];
            gt(&num[i]);
            }
    }

    return 0;
}

void pushb(int* a) {
    v.push_back(*a);
}

void popb(){
    v.pop_back();
}
void sz(){
    cout << v.size() << endl;
}
void gt(int *a){
    if (*a == 0) return;
    cout << v[*a-1] << endl;
}