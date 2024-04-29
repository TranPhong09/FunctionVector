#include<bits/stdc++.h> 
using namespace std ; 
   int main() {

    vector<int> v;
    int n;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    sort(v.rbegin(), v.rend());
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

