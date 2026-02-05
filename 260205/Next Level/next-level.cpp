#include <iostream>

using namespace std;

struct user{
    string id;
    int lv;

    user(const string &id, int lv) : id(id), lv(lv){};

    void printspec()const{
        cout << "user " << id << " lv " << lv << '\n';
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const user a("codetree", 10);
    user b("codetree", 10);
    cin >> b.id >> b.lv;

    a.printspec();
    b.printspec();

    return 0;
}