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
const int X = 100;
int col,row;
char arr[X][X];

void  Khida_lagse(int i, int j,ll &ans){

    if (i < 0 || i >= row || j < 0 || j >= col || arr[i][j] == '#') return;

    ans++ ;
    arr[i][j] = '#';

    Khida_lagse(i+1,j,ans);
    Khida_lagse(i-1,j,ans);
    Khida_lagse(i,j+1,ans);
    Khida_lagse(i,j-1,ans);

}
int main()
{
    //fast

    int t=1;
    cin>>t;

    for(int tt=1; tt <= t; tt++)
    {
       
        cin >> col >> row;

        int x,y;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> arr[i][j];

                if(arr[i][j] == '@'){ x = i; y = j;}
            } 
        }

        ll ans = 0;

        Khida_lagse(x,y,ans);

        printf("Case %d: ",tt);

        cout << ans << endl;
        
    }
    

    return 0;
}