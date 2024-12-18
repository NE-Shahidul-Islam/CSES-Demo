#include <bits/stdc++.h>
#define FIO                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define ll long long
#define in(x) cin>>x
#define out(x) cout<<x
#define vin(v) for(int i=1; i<=n; i++) in(v[i])
#define vout(v) for(int i=1; i<=n; i++) out(v[i])
#define llloop(i, a, b)  for (ll i = a; i <= b; i++)
#define rllloop(i, b, a)  for (ll i = b - 1; i >= a; i--)
#define iloop(i, a, b)  for (int i = a; i <= b; i++)
#define riloop(i, b, a)  for (int i = b - 1; i >= a; i--)
#define sob(x)  x.begin(), x.end()
#define rsob(x)  x.rbegin(), x.rend()
#define sz(x)  (ll) x.size()
#define pb  push_back
#define ppb  pop_back
#define M 1e9 + 7
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nl '\n'
#define bits(x) __builtin_popcountll(x)
#define vl vector<ll>
#define vi vector<int>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define uni(x) x.erase(unique(all(x)), x.end())


using namespace std;

void gray_code(ll x, ll n){
    cout << ((x>>(n-1)) & 1);
    for(int i = n-2; i>=0 ; i-- ){
        ll a = (x>>i) & 1;
        ll b =(x>>(i+1)) & 1;
        ll ans = a^b;
        cout << ans ;
    }
}
void naruto()
{
   ll n; cin >> n;

   for(ll i= 0; i<(1LL<<n)  ; i++){
    gray_code(i, n);
    cout << nl;
   }


  
   
}


signed main()
{
    FIO;
    naruto();
    return 0;
}