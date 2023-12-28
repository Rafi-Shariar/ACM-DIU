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
    fast

    int n,m;
    cin >> n >> m;

    vector<int>a(n), b(m);

   forin(a,n);
   forin(b,m);

   int mn = min(a.size(), b.size());

   ll c = 0;

   for (int i = 0; i < mn; i++)
   {
      if( a[i] < b[i] ) c+= ( b[i] - a[i]);
   }

   cout << c << endl;
   
   
    
    

    return 0;
}