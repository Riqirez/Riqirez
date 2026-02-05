#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Snow{
    string day, mon, rain;

    Snow(const string &a, const string &b, const string &c)
    : day(a), mon(b), rain(c) {};
};

bool compare(const Snow &a, const Snow &b){
    return a.day<b.day;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ptr=0;
    cin >> n;
    
    vector<Snow>p;
    p.reserve(n);

    for(int i=0; i<n; i++){
        string a,b,c;
        cin >> a >> b >> c;
        if(c=="Rain") p.emplace_back(Snow(a,b,c));
    }

    sort(p.begin(), p.end(), compare);

    cout << p[0].day << ' ' << p[0].mon << ' ' << p[0].rain;
    return 0;
}