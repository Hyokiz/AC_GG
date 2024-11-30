#include <iostream>
#include <vector>
using namespace std;

const int k = 200010;

int main(){
    /* --- 人の美食度 a おいしさ b ---*/
    int n, m;// n:人 m:寿司

    cin >> n >> m;
    vector<int> id(k, -1);

    int r = k;
    for(int i = 0; i<n; i++){
        int a;
        cin >> a; //美食度

        while(r > a){
            --r;
            id[r] = i + 1;
        }
    }
    for(int i = 0; i<m; i++){
        int b;
        cin >> b;
        cout << id[b] << endl;
    }
}