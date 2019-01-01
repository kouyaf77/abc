#include<iostream>

using namespace std;

int main() {
    int number, amount;
    cin >> number >> amount;

    int numOf10000 = -1, numOf5000 = -1, numOf1000 = -1;

    for(int i = 0; i <= number; ++i) {
        for(int j = 0; j + i <= number; ++j) {
            int z = number - i - j;
            int total = 10000 * i + 5000 * j + 1000 * z;
            if (total == amount) {
                numOf10000 = i;
                numOf5000 = j;
                numOf1000 = z;
            }
        }
    }

    cout << numOf10000 << " " << numOf5000 << " " << numOf1000 << endl;
    return 0;
}