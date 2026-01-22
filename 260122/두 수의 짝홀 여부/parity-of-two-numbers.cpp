#include <iostream>

using namespace std;

void dis(int i){
    if(i%2) cout << "odd" << '\n';
    else cout << "even" << '\n';

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a>>b;
    dis(a);
    dis(b);
    
    return 0;
}