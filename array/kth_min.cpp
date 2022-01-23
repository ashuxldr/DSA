// Given an array arr[] and an integer K where K is smaller than size of array, 
// the task is to find the Kth smallest element in the given array.
//  It is given that all array elements are distinct.

#include<bits/stdc++.h>
using namespace std;

int main(){
     int t,k;
     cout<<"enter array size"<<endl;
     cin>>t;
     cout<<"enter kth "<<endl;
     cin>>k;

     int a[t];
     for(int i=0;i<t;i++){
         cin>>a[i];
     }
     sort(a,a+t);

     cout<<"kth min:"<<a[k-1];
}