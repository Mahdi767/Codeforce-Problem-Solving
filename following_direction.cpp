/**
 *    author:  Mahdi Hasan
 *    created: 2024-12-05 20:33:13
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
      int n;
      cin>>n;
      int x=0,y=0;
      vector<string>a(n);
      for(int  i =0;i<n;i++){
        cin>>a[i];
      }  
       for(int  i =0;i<n;i++){
       if(a[i]=="R"){
        x++;
       }
       if(a[i]=="L"){
        x--;
       }
       if(a[i]=="U"){
        y++;
       }
       if(a[i]=="D"){
        y--;
       }
      }
      cout<<x<<" "<<y;
      
    //    if(x==1 && y==1){
    //     cout<<"YES"<<endl;
    //    }else{
    //     cout<<"NO"<<endl;
    //    }
      
    }
    return 0;
}