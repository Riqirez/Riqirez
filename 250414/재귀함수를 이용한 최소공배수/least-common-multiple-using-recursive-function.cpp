#include <iostream>

using namespace std;

int n, result;
int arr[101];

int gcd(int a,int b) { // 최대공약수
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) { //최소공배수
    return a * b / gcd(a, b);
}

int main() {
    cin >> n;
    for (int i = 0; i < n;i++) cin >> arr[i];
    result = arr[0];

    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }
    cout << result;
    return 0;
}
