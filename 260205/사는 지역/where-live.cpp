#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Private{
    string name, addr, city;

    Private(const string &a, const string &b, const string &c)
    : name(a), addr(b), city(c) {};
};

bool compare(const Private &a, const Private &b){
    return a.name>b.name;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<Private> p;
    p.reserve(n);

    for(int i=0; i<n; i++){
        string name,addr,city;
        cin >> name >> addr >> city;
        p.emplace_back(name, addr, city);
    }

    sort(p.begin(), p.end(), compare);

    cout << "name " << p[0].name << '\n';
    cout << "addr " << p[0].addr << '\n';
    cout << "city " << p[0].city << endl;
    
    return 0;
}