#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n; 
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int q; 
    cin >> q;
    while (q--) {
        int tt;
        cin >> tt;
      if ( tt == 1 ){ 
        int index ,  x ; cin >> index >> x ; 
        if ( index <= (int)v.size())
        {
           v.insert(v.begin() + index , x );
        } else cout << "khong hop le " <<  endl; 
      } else 
     if ( tt == 2 ){ 
        int index ; cin >> index ; 
        if ( index < v.size() && !v.empty()){ 
          v.erase(v.begin()+index); 
           } else cout <<"khong hop le "<< endl; 
     } else 
    if ( tt == 3 ) { 
      int l , r ; cin >> l >> r ; 
      if ( r < (int)v.size() && !v.empty()){ 
        v.erase(v.begin()+l,v.begin()+r  + 1 ); } else cout << "khong hop le "<< endl; 

      } else  { if (v.size() != 0 ) cout << v.back() << endl ; else cout << "khong hop le "<< endl ;
     
    }
  }
    if (v.empty()) cout <<"Empty" ; else 
       for ( int x : v ){ cout << x << " ";
    }   
}