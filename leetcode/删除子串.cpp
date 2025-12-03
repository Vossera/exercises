#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count[27] = {0};

    string input;
    cin >> input;

    vector<char> tobedeleted;
    for (char c : input) {
        count[c-'a'] += 1;
    }
    int min = 50;
    for (int i=0; i<26; i++) {
        if (min > count[i] && count[i] > 0) {
            min = count[i];
        }
    }

    for (int i=0; i<26; i++) {
        if (min == count[i]) {
            tobedeleted.push_back(i+'a');
        }
    }

    for (char c : tobedeleted) {
        int pos = 0;
        while (true) {
            pos = input.find(c, 0);
            if (pos == string::npos) {
                break;
            }
            input.erase(pos, 1);
        }
    }
    cout << input;
}
// 64 位输出请用 printf("%lld")