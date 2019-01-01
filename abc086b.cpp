#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t[110000], x[110000], y[110000];
    for(int i = 0; i < n; ++i) cin >> t[i+1] >> x[i+1] >> y[i+1];

    bool isSuccess = true;
    for (int i = 0; i < n; ++i) {
        int dt = t[i+1] - t[i];
        int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
        if (dt < dist) isSuccess = false;
        if (dist % 2 != dt % 2) isSuccess = false;
    }

    if (isSuccess) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}