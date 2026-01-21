#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a=5;
    int b=6;
    int c=7;

    swap(a,c);
    swap(c,b);

    cout << a << '\n' << b << '\n' << c;

    return 0;
}