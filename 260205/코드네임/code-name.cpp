#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int person = 5;

struct agent{
    char code;
    int score;

    agent(char code = 0, int score = 0) : code(code), score(score) {};
};

bool compare(const agent &a, const agent &b){
        if(a.score!=b.score) return a.score < b.score;
        return a.code;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    agent a[person];
    for(int i=0; i<person; i++){
        char code;
        int score;
        cin >> code >> score;
        a[i] = agent(code, score);
    }
    sort(a, a+person, compare);

    cout << a[0].code << ' ' << a[0].score;
    return 0;
}