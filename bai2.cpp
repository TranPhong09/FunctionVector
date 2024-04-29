#include<bits/stdc++.h>
using namespace std; 
int main(){
	vector<int> v ; 
	int n ; cin >> n ; 
   for (int i = 0; i < n; ++i)
   {
   	 int x ; cin >> x ;
   	 v.push_back(x); 
   }
   int q ; cin >> q ; 
   while (q--){
      int tt ; cin >> tt ; 
   	 if ( tt == 1 )
   	 {
          int x ; cin >> x ; 
          v.push_back(x);
   	 } 
   	 else if ( tt== 2 )
   	 { 
   	 	if (!v.empty()) cout << v.front() << endl; else cout<<"No front" << endl; 
   	 } else if ( tt==3 )
   	 {
   	 	if (v.size() != 0 )  v.pop_back()  ; else cout <<"No back" << endl ;
   	 }  
  
   } 
 if (v.empty()) cout << "EMPTY";
 else {
 	  for ( int y : v ) { cout << y << " " ;}
 }  
}