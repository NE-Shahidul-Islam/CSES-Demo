#include <bits/stdc++.h>
#define FIO                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

using namespace std;



void naruto()
{
    ll x, y;
    cin >> x >> y;

    if(x<y) swap(x,y);
    if(x>2*y) {no; return;}

    x%=3, y%=3;
    if(x<y) swap(x,y);
    if(x==0 and y==0 || x==2 and y==1) yes;
    else no;
}

int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        naruto();
    }
    return 0;
}
