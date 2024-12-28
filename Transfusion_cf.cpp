/**
 *    author:  Mahdi Hasan
 *    created: 2024-12-05 21:33:07
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
          for (int i = 2; i < n-1; i++)
        {
          a[i-1]-=1;
          a[i+1]+=1;

          a[i+1]-=1;
          a[i-1]+=1;
        }
          for (int i = 0; i < n; i++)
        {
          cout<< a[i]<< " ";
        }
    }
    return 0;
}