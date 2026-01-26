#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int arr[12] = {31,28,31,30,31,30
                  ,31,30,30,31,30,31};
    cout << arr[n];
    return 0;
}