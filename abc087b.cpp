#include<iostream>

using namespace std;

int main() {
    int numberOf500, numberOf100, numberOf50;
    int sum;
    int count = 0;
    cin >> numberOf500 >> numberOf100 >> numberOf50 >> sum;

    for (int i = 0; i <= numberOf500; ++i) {
        for (int j = 0; j <= numberOf100; ++j) {
            for (int z = 0; z <= numberOf50; ++z) {
                if ((500 * i + 100 * j + 50 * z) == sum) {
                    ++count;
                }
            }
        }
    }

    cout << count;

    return 0;
}