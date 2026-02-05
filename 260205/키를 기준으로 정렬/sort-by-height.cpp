#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct person{
    string name;
    int cm,kg;

    person(const string &name, int cm, int kg): name(name), cm(cm), kg(kg){};
    
    void myprint(){ cout << name << ' ' << cm << ' ' << kg << '\n'; }
};

bool cmp(const person &a, const person &b){ return a.cm < b.cm; }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<person>p;
    p.reserve(n);
    
    for(int i=0; i<n; i++){
        string s;
        int a,b;
        cin >> s >> a >> b;
        p.emplace_back(s,a,b);
    }

    sort(p.begin(), p.end(), cmp);

    for(int i=0; i<n; i++) p[i].myprint();

    return 0;
}