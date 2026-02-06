#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    const int arr[14] = {0,0,31,59,90,120,151,181,212,243,273,304,334,365};
    const string day[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

    const int diff = ((arr[m2] + d2) - (arr[m1] + d1));
    cout << day[(diff%7+7)%7];
    return 0;
}