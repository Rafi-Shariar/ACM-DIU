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


//https://vjudge.net/contest/600885#problem/J
int main()
{
    fast

    map<ll,int>mp;

    ll a;
    vector<int>v;

    while ( cin >> a )
    {
      if( mp[a] == 0) v.push_back(a);
      mp[a]++;
    }

    for (int i = 0; i < v.size(); i++)
    {
       cout << v[i] << " " << mp[ v[i]] << endl;
    }
    
    

    return 0;
}