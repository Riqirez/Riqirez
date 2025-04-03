#include <iostream>

using namespace std;

int main() {
    int start, end, count=0, cnt=0;
    cin >> start >> end;
    for (int i = 1; i <= end; i++) {
        if (i >= start) {
            for (int j = 1; j <= i; j++) {
                if (i % j == 0)count++;
            }
            if (count == 3) cnt++;
        }
        count = 0;
    }
    cout << cnt << '\n';
    return 0;
}