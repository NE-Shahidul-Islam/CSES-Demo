#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  ll n,k;
    cin >> n>>k;
   ll ans=0;
    vector<ll>primes(k),new_lcm;
    for (int i = 0; i <k; i++)
    {
       cin>>primes[i];
       ans+=(n/primes[i]);
    }

    for (ll i = 0; i <k-1; i++)
    {
        for (ll j = i+1; j < k; j++)
        {
            ll lcm=(primes[i]*primes[j]/__gcd(primes[i],primes[j]));
            new_lcm.push_back(lcm); }
        
    }
   ll total=0;
    for (ll i = 0; i <new_lcm.size(); i++)
    {
      new_lcm[i]=n/new_lcm[i];
      total+=new_lcm[i];
    }
    cout<<ans-total;
    
    
    

    return 0;
}





 










