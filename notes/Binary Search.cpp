#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int n,l,r;

// Basic Binary Search 

int binary_search(vector<int>&v, int target){

    int low = 0, high = v.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low ) / 2;

        if( v[ mid ] == target) return mid;
        else if ( v[ mid ] < target ) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
    
}

//-----------------------------------------------------------------------------------------------------------------------

/* lower bound :  return smallest index such that arr[ i ] ≥ target , 
if the target is not present in the array then it will return the index = size + 1 */

   auto LB = lower_bound(v.begin(), v.end(), n) - v.begin();

   // int a range
     auto LB2 = lower_bound(v.begin()+l, v.begin()+r, n) - v.begin();

/* Upper Bound: returns smallest index such that arr[i] > target. */

//-----------------------------------------------------------------------------------------------------------------------


// search in rotated sorted array including dublicates

bool searchInARotatedSortedArrayII(vector<int>&v, int key) {

    int low = 0, high = v.size() - 1;

    while( low <= high ){

        int mid = low + ( high - low) / 2;

        if( v[mid] == key) return true;

        if( v[low] == v[mid] && v[mid] == v[ high]){
            low++;
            high--;
            continue;
        }

        if( v[low] <= v[mid]){

            if( v[low] <= key && key <= v[mid]) high = mid - 1; // if value is in left part
            else low = mid + 1; // if value is in right part
        }
        else{

            if( v[mid] <= key && key <= v[high]) low = mid + 1; // if value is in right part
            else high = mid - 1; // if value is in left part
        }
    }

    return false;
    
}

//-----------------------------------------------------------------------------------------------------------------------
