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


void Bubble_sort( vector<int>&v){

    for (int i = 0; i < v.size()-1; i++)
    {
        for (int j = i+1; j < v.size()-1; j++)
        {
            if( v[j] > v[j+1]){
                
                swap ( v[j] , v[j+1]);
            }
        }
        
    }
    
}
int main()
{
    fast

    int n; cin >>n;
    vector<int>v(n);
    forin(v,n);

    Bubble_sort(v);

    for(auto i : v) cout << i << " ";
    cout << endl;
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  12-February-2024  12:35:21
*/ 
 