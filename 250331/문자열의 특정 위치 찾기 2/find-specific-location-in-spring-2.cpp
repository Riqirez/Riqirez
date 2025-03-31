#include <iostream>
using namespace std;

int main() {
    string words[5] = { "apple", "banana", "grape", "blueberry", "orange" };
    char n;
    cin >> n; 
    int count = 0; 
    for (int i = 0; i < 5; i++) {
        string word = words[i];
        if (word[2] == n || word[3] == n) {
            cout << word << endl;
            count++;
        }
    }

    cout << count << endl; // 일치하는 문자열 개수 출력
    return 0;
}
