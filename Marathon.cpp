/**
 *    author:  Mahdi Hasan
 *    created: 2024-12-06 15:26:10
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
   
    while (T--) {
         int cnt =0;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<b){
        cnt++;
        }if(a<c){
            cnt++;
        }if(a<d){
            cnt++;
        }
            cout<<cnt<<endl;
    }

    return 0;
}