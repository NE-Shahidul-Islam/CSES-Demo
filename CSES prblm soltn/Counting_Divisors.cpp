#include <bits/stdc++.h>
using namespace std;
const int N=1e6+9;
 int cnt[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int lim= 1e6;
  
    for (int i = 1; i <= lim; i++)
    {
        for (int j = i; j <= lim; j += i)
        {
           cnt[j]++;
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << cnt[n] << endl;
    }

    return 0;
}