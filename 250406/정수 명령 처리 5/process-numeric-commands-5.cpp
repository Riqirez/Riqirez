#include <iostream>

using namespace std;

int N;
string command[10000];
int num[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
        }
    }

    int arr[10000];
    int size = 0;

    for (int i = 0; i < N; i++) {
        if (command[i] == "push_back") {
            arr[size++] = num[i];
        }
        else if (command[i] == "pop_back") {
            if (size > 0) size--;
        }
        else if (command[i] == "size") {
            cout << size << '\n';
        }
        else if (command[i] == "get") {
            int index = num[i] - 1;
            if (index >= 0 && index < size) {
                cout << arr[index] << '\n';
            }
        }
    }
    return 0;
}