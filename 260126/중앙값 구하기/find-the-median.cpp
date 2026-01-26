#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3];
    for(int &i : arr) cin >> i;

    sort(arr, arr+3);
    cout << arr[1];

    return 0;
}