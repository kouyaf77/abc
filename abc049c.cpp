#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string master[4] = {"dream", "dreamer", "erase", "eraser"};
    string s;
    cin >> s;

    reverse(s.begin(), s.end());
    for(int i = 0; i < 4; ++i) {
        reverse(master[i].begin(), master[i].end());
    }

    bool isSuccess = true;
    for(int i = 0; i < s.size();){
        bool isMatch = false;
        for (int j = 0; j < 4; ++j) {
            string m = master[j];
            if (s.substr(i, m.size()) == m) {
                isMatch = true;
                i += m.size();
            }
        }

        if (!isMatch) {
            isSuccess = false;
            break;
        }
    }

    if (isSuccess) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}