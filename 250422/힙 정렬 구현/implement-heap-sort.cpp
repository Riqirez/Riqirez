#include <iostream>

using namespace std;

int n;
int arr[100001];

// 파티션 함수
int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) swap(arr[++i], arr[j]);
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// 퀵 정렬 함수
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    quickSort(arr, 1, n);
    for (int i = 1; i <= n; i++) cout << arr[i] << " ";
    return 0;
}
