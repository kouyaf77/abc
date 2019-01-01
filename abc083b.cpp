#include<iostream>

using namespace std;

int sumOfDigists(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int total = 0;

    for (int i = 0; i <= n; ++i) {
        int sum = sumOfDigists(i);
        if (sum >= a && sum <= b) {
            total += i;
        }
    }

    cout << total << endl;

    return 0;
}