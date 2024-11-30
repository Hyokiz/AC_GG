#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m; // n:人 m:寿司

    cin >> n >> m;
    
    vector<int> a; //人の美食度
    vector<int> b; //おいしさ
    int input;
    for(int i = 0;i<n;i++){
        cin >> input;
        a.push_back(input);
    }
    a.push_back(0); //末尾に0を追加

    for(int i = 0;i<m;i++){
        cin >> input;
        b.push_back(input);
    }
    b.push_back(0); //末尾に0を追加

    int cb[a.size()][2] = {}; //チェック用 0:番目, 1:値
    //人を選別する
    int min = a[0];
    cb[0][0] = 0;
    cb[0][1] = min;
    int j = 1; //cbのインデックス
    for(int i=1; i<a.size(); i++){
        if(min > a[i]){
            cb[j][0] = i;
            cb[j][1] = a[i];
            min = a[i];
            j++;
        }
    }
    
    int ans;
    for(int i = 0; i<m; i++){
        ans = -1;
        for(int k = 0; k < j; k++){
            if(b[i] >= cb[k][1]){
                ans = cb[k][0] + 1;
                break;
            }
        }
        cout << ans << endl;
    }

}