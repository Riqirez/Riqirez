#include <iostream>
#include <queue>
using namespace std;

int N, K;

int main() {
    cin >> N >> K;

    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    cout << "<";
    while (!q.empty()) {
        // K-1명을 뒤로 보냄
        for (int i = 0; i < K - 1; i++) {
            q.push(q.front());
            q.pop();
        }

        // K번째 사람 제거
        cout << q.front();
        q.pop();

        if (!q.empty()) cout << ", ";
    }
    cout << ">\n";

    return 0;
}
