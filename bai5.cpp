#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    cout << *min_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end()) << " " << accumulate(v.begin(), v.end(), 0) << endl;

    return 0;
}
