/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-09,21:25:18
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back

int main() {
    // int tc;
    // cin >> tc;
    // while (tc--) {
string s;
cin>>s;
for(char c : s){
    if(c=='H' || c=='Q' || c=='9'){
        cout<<"YES"<<endl;
        return 0;
    }
    }
        cout<<"NO"<<endl;
        
     
    return 0;
}
   
/**
Explanation:
Loop through the string: The for loop checks each character in the input string s.
Check for 'H', 'Q', or '9': If any character matches, the program prints "YES" and immediately exits the program with return 0. This ensures it doesn't check any more characters unnecessarily.
Print "NO": If the loop finishes without finding any of the characters, it prints "NO".
This logic ensures the program only prints one "YES" or "NO", as desired.
*/