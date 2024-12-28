/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-28,23:42:45
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back
#define vc vector<int>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
   int a,b,x,y;
   cin>>a>>b>>x>>y;
   int misha = max((3*a)/10,(a-(a/250))*x);
   int vasya =  max((3*b)/10,(b-(b/250))*y);;
   if(misha>vasya){
    cout<<"Misha";
   }else if( vasya> misha){
    cout<<"Vasya"<<endl;
   }else{
    cout<<"Tie"<<endl;
   }
    return 0;
}