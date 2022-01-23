#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin>>t; 
     int a[t];
     for(int i=0;i<t;i++){
         cin>>a[i];
     }
     int g=a[0], s=a[0];
     for(int i=0;i<t;i++){
     if(a[i]>g)
     g=a[i];
     if(a[i]<s)
     s=a[i];
     }
     cout<<"max:"<<g;
     cout<<"min:"<<s;
}