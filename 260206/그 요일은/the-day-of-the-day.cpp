#include <iostream>

using namespace std;

const int arr[14] = {0,0,31,60,91,121,152,182,213,244,274,305,335,366};
const string day[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

int myfind(string s){
    for(int i=0; i<7; i++) if(day[i] == s) return i;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m1, d1, m2, d2;
    string s;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> s;

    const int diff = ((arr[m2] + d2) - (arr[m1] + d1));

    cout << (diff+myfind(s))/7;
    return 0;
}