/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-12,19:22:45
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back

int main() {
string s1,s2;
cin>>s1>>s2;
for(size_t i =0;i<s1.length();++i){
    if(s1[i]== s2[i]){
        s1[i]= '0';
    }else{
        s1[i]= '1';
    }
}
cout<<s1<<endl;
       return 0;
}