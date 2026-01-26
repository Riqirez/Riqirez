#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int fever, cnt=0;
    char a;
    for(int i=0; i<3; i++){
        cin >> a >> fever;
        if(a=='Y'&&fever>=37) cnt++;
    }
    cout << (cnt>=2 ? 'E' : 'N');
    return 0;
}