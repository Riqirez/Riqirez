#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k=1;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << k << ' ';
            k<9 ? k++ : k=1;
        }
        cout << '\n';
    }
    return 0;
}
