#include <iostream>
using namespace std;

int findMax(int arr[], int n, int index = 0, int maxVal = INT_MIN) {
    // 기저 사례: 배열의 끝까지 도달했을 때 최대값 반환
    if (index == n) return maxVal;

    // 현재 요소와 maxVal 중 큰 값을 선택
    maxVal = max(maxVal, arr[index]);

    // 다음 인덱스로 재귀 호출
    return findMax(arr, n, index + 1, maxVal);
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n]; // 동적 배열 할당
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMax(arr, n) << endl;

    delete[] arr; // 동적 메모리 해제
    return 0;
}
