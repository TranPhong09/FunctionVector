#include<bits/stdc++.h> 
using namespace std ; 
int main(){
	 vector<int> v ; 
	 int n ; cin >> n ; 
	 for (int i = 0; i < n; ++i)
	 {
	 	int x ; cin >> x ; 
	 	v.push_back(x); 
	 }
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		cout << *i << " " ; 
	} 
	cout <<"" << endl ;  
   for (auto iv = v.rbegin(); iv != v.rend(); ++iv)
	{
		cout << *iv << " " ; 
	}  
   
}