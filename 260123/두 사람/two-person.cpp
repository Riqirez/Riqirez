#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a_age, b_age;
    char a_sex, b_sex;
    cin >> a_age >> a_sex;
    cin >> b_age >> b_sex;

    cout << ((a_age >= 19 && a_sex == 'M') ||
    (b_age >= 19 && b_sex == 'M'));
    
    return 0;
}