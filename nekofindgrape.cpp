#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, m,c1,c0,k0,k1;
   int t;


   c0=0,c1=0,k0=0,k1=0;
   cin>>n>>m;
   vector<int >a(n),b(m);
   for(int i=0;i<n;i++){
      cin>>a[i];


   }
   for(int j=0;j<m;j++){
     cin>>b[j];


   }
   for(int i=0;i<n;i++){
    if(a[i]%2!=0){


        c1++;
    }
    else
        c0++;

   }
   for(int j=0;j<m;j++){
      if(b[j]%2!=0){
         k1++;


      }
      else
        k0++;


   }
   int ans=min(k1,c0)+min(k0,c1);
   cout<<ans<<endl;
   return 0;








}
