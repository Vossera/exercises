#include <regex>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
using namespace std;

void myprint(string a){
    cout << a << endl;
}
int main() {
    string input;
    while (cin >> input) {
        pair<int, int> pos(0, 0);
        string token;
        stringstream ss(input);
        while (getline(ss, token, ';')) {
            if (token.length() <= 1 || token.length() > 3)
            {
                continue;
            }
            
            string temp = token.substr(1);

            if (regex_match(temp, regex("[0-9]+"))) {
                switch (token[0]) {
                    case 'A': pos.first -= stoi(temp); myprint(token); break;
                    case 'D': pos.first += stoi(temp); myprint(token);break;
                    case 'W': pos.second += stoi(temp); myprint(token);break;
                    case 'S': pos.second -= stoi(temp); myprint(token);break;
                    default: break;
                }
            }
            
        }
        cout << pos.first << ',' << pos.second << endl;
    }

}
// 64 位输出请用 printf("%lld")