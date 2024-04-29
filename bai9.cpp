#include<bits/stdc++.h> 
using namespace std ; 
int main(){ 
  int n ; cin >> n ; 
  vector<double> v ; 
   for (  int i = 0 ; i < n ; i++ ){ 
      int x , y ; cin >> x >> y  ; 
      double kc = sqrt( pow(x,2 ) + pow(y,2) ) ;
       v.push_back(kc); 
        } 
 sort(v.begin(), v.end());
 for ( int i = 0 ; i < v.size() ; i++) cout << fixed << setprecision(2) << v[i] << " " ; 
 }
