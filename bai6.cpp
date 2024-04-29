#include<bits/stdc++.h> 
using namespace std ; 
int main(){ 
   vector<int> v ; 
   int n ; cin >> n ; 
   for ( int i = 0 ; i < n ; i++) { 
      int x ; cin >> x ; 
      v.push_back(x);
  } 
int q ; cin >> q ; 
while (q--){ 
  int tt , l , r  ; cin >> tt >> l >> r ; 
  if ( tt == 1 ) { 
      	reverse(v.begin()+l,v.begin()+r+1);
  	 } 
 else  {
  swap(v[l] , v[r]);
   }  
 }
 for ( int x : v ){
  cout << x << " "; }
 return 0 ; 

}