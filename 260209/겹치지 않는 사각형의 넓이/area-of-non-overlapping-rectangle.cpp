#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int arr[2001][2001] = {};

void ps(int& t) {
    t += 1000;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 3;
    while (N--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        ps(a); ps(b); ps(c); ps(d);
        for (int y = b; y < d; y++) {
            for (int x = a; x < c; x++) {
                if (N != 0) arr[y][x] = 1;
                else arr[y][x] = 0;
            }
        }
    }
    int cnt = 0;
    for (int y = 0; y < 2001; y++) {
        for (int x = 0; x < 2001; x++) {
            if (arr[y][x]) cnt++;
        }
    }

    cout << cnt;
    return 0;
}