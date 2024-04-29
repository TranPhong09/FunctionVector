#include<bits/stdc++.h> 
using namespace std ; 
int main(){
	 vector<pair<int,pair<int,int>>> v ; 
	 int n ; cin >> n ;
	 for ( int i = 0 ; i < n  ; i++){ 
	   int x , y ,z  ; cin >> x >> y >> z ;  
	    v.push_back({x  , {y , z }});
	} 
	 sort(v.begin(),v.end() ); 
	 for ( auto x : v ) {
	  cout << x.first <<" "  << x.second.first << " " << x.second.second<< endl;  
}
}