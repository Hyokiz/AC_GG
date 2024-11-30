#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,d;
    string s;
    cin >> n >> d;
    cin >> s;
    
    int empty = 0; //空の箱の数の合計
    for(int i = 0; i < n; i++){ 
        if(s[i] == '.'){
            empty++;
        }
    }

    cout << empty + d << endl;
}