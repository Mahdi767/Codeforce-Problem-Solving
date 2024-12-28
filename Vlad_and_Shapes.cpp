/**
 *    author:  Mahdi Hasan
 *    created: 2024-12-07 07:43:20
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
      int n;
      cin>>n;
      int a[n];
      for(int i =0;i<n;i++){
        cin>>a[i];
      }  
    int sum =0;
    for(int i =0;i<n;i++){
       if((a[i]+=sum) % 2 ==0){
        cout<<"TRIANGLE"<<endl;
        break;
       }else{
        cout<<"SQUARE"<<endl;
        break;
       }
      }  
    }
    return 0;
}