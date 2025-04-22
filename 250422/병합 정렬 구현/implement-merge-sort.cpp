#include <iostream>
using namespace std;

int n, arr[100000], tmp[100000];

void merge_sort(int s, int e) {
    if (e - s < 2) return;
    int m = (s + e) / 2;
    merge_sort(s, m);
    merge_sort(m, e);
    int i = s, j = m, k = s;
    while (i < m && j < e)
        tmp[k++] = (arr[i] < arr[j]) ? arr[i++] : arr[j++];
    while (i < m) tmp[k++] = arr[i++];
    while (j < e) tmp[k++] = arr[j++];
    for (int l = s; l < e; l++) arr[l] = tmp[l];
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    merge_sort(0, n);
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
}
