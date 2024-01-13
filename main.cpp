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



int main()
{
    //fast

    int t=1,tt=1;
    cin>>t;

    while (t--)
    {
        ll n,k;
        cin >> n >> k;

        ll res = n - k;

        ll mod = 1000003;

        ll fac = 1;

        for (ll i = k+1; i <= n; i++)
        {
            fac = ((fac%mod) * (i%mod) ) % mod;
        }

        printf("Case %d: ",tt++);

        if( k == 0) cout << 1 << endl;
        else if( res <= 0) cout << 0 << endl;
        else cout << fac / res << endl;


        


    }
    

    return 0;
}