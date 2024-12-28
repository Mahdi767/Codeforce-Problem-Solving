/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-13,22:28:08
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back

int main() {
  int a,b;
  cin>>a>>b;
      int age1=a;
  int age2=b;
  for(int i = 1;i<=10;i++){

age1*=3;
age2*=2;
if(age1>age2) {cout<<i;
break;}
  }
    return 0;
}