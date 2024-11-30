#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,d;
    string s;
    cin >> n >> d;
    cin >> s;

    for(int i = s.length(); d > 0; i--){ 
        if(s[i] == '@'){
            s[i] = '.';
            d--;
        }
    }

    cout << s << endl;
}