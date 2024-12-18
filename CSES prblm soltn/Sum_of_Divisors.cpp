#include <bits/stdc++.h>
using namespace std;
const int N=1e6+9;
const int M=1e9+7;
 int cnt[N];
 long long int sum[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int lim= 1e6;
  
    for (int i = 1; i <= lim; i++)
    {
        for (int j = i; j <= lim; j += i)
        {
          (sum[j]+=i)%M;
        }
    }
   
    
    

   
    return 0;
}