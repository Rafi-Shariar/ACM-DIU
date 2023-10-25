#include<bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& v)
{
	int n = v.size();

	if( n==1) return v[0];

	if( v[0] != v[1]) return v[0];
	if( v[n-1] != v[n-2]) return v[n-1];

	int low = 1, high = n-2;

	while(low <= high){

		int mid = low + ( high - low ) /2;

          cout << mid << endl;

		if( v[mid] != v[mid+1] && v[mid] != v[mid-1]){
          
            return v[mid];
        }

		if( (mid % 2 == 1 && v[mid] == v[mid-1] ) || mid % 2==0 && v[mid] == v[mid+1] ) low = mid + 1;
		else high = mid - 1;
	}

	return -1;


}

int main(){

    int n; cin >> n;
    vector<int>v(n);
    for( int i=0; i<n; i++ ) cin >> v[i];

    cout << singleNonDuplicate(v) << endl;
}