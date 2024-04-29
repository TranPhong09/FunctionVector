#include<bits/stdc++.h> 
using namespace std ;
int main(){ 
   
   int n , m ;  cin >> n >> m ; 
   while ( n-- ){ 
   	   vector<int> v ; 
      for ( int i = 0 ; i < m ; i++){ 
          int  x ; cin >> x ; 
          v.push_back(x); 
      }
     cout << *min_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end())  << endl ;  
      
  } 
}