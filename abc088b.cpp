#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for( int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());
    
    int aliceTotal = 0;
    int bobTotal = 0;
    for( int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            aliceTotal += v[i-1];
        } else {
            bobTotal += v[i-1];
        }
    }

    cout << (aliceTotal - bobTotal) << endl;

    return 0;
}