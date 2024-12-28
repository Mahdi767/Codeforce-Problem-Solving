/**
 *    author:  Mahdi Hasan
 *    created: 2024-12-05 20:08:14
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    int cnt1 =0;
    int cnt2 =0;
    while (T--) {
                string s;
        cin >> s;
        if (s == "X++" || s == "++X") {
            cnt1++;
        } else if (s == "X--" || s == "--X") {
            cnt2--;
        }

    }
    if(cnt1>=cnt2){
        cout<<cnt1+cnt2;
    }else{
        cout<<cnt2+cnt1;
    }
   
}