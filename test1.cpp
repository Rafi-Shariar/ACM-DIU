/*
Author: Abid Hasan
Created:  21-September-2023  21:10:41
*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define int        ll
#define endl       "\n"
#define w(x)       int x; cin>>x; while(x--)
#define f(i,x)     for(int i=0;i<x;i++)
#define pb         push_back
#define pob        pop_back
#define mp         make_pair
#define deb(x)     cout<<#x<<" = "<<x<<endl;
#define all(x)     x.begin(),x.end()
#define sz(x)      x.size()
#define fi         first
#define se         second
 
 
signed main(){
    __
    w(tc){
        int n,k,ans=0;
        cin>>n>>k;
        string s;
        cin>>s;
        f(i,n){
            if(s[i]=='B'){
                ans++;
                i+=k-1;
            }
        }
        cout<<ans<<endl;
        
    }
    
}