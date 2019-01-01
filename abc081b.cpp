#include<iostream>
#include<vector>
using namespace std;

int calculate(vector<int> v) {
    vector<int> newV(v.size());

    for(int i = 0; i < v.size(); i++) {
        if (v[i] % 2 != 0) {
            return 0;
        }
    
        newV[i] = v[i] / 2;
    }

    return calculate(newV) + 1;
}

int main() {
    int n;

    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << calculate(v);
    
    return 0;
}