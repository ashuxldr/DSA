#include <bits/stdc++.h>
using namespace std;

bool check_sorted_array(vector<int> arr, int idx){
    
    if(idx ==  arr.size()-1)
    return true;
    
    bool res = check_sorted_array(arr, idx+1);
    bool ans = res and (arr[idx] <= arr[idx+1]); 
    return  ans;
}


int main(){
    vector<int> arr = {1,2,3,8,5,6,7};
    cout<<check_sorted_array(arr, 0);
    return 0;
}