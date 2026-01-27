#include <iostream>

using namespace std;

int n, m;

void swap(int &n, int &m){
    int temp = n;
    n=m;
    m=temp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;

    swap(n,m);

    cout << n << ' '<< m;
    return 0;
}