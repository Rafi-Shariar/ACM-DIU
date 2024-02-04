#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define forin(x,n)  for(int i=0; i<n; i++) cin>>x[i];
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif


ll mod = 998244353;


int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll ans = 1;

        for (int i = 1; i <= n; i++)
        {
            ans = (ans * i ) % mod;
        }

        cout << ans << endl;
        


        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  04-February-2024  00:53:34
*/ 
 