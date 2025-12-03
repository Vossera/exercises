#include <iostream>
using namespace std;

int main() {
    string password;
    while (cin >> password) {
        if (password.length() < 8) {
            cout << "NG" << endl;
            continue;
        }
        int have_Capital = 0;
        int have_Small = 0;
        int have_Number = 0;
        int have_Special = 0;
        for (int i = 0; i < password.length(); i++) {
            if (password[i] >= 65 && password[i] <= 90) {
                have_Capital = 1;
            } else if (password[i] >= 97 && password[i] <= 122) {
                have_Small = 1;
            } else if (password[i] >= 48 && password[i] <= 57) {
                have_Number = 1;
            } else if (password[i] >= 33 && password[i] <= 126) {
                have_Special = 1;
            }
        }

        if (have_Capital + have_Small + have_Number + have_Special < 3) {
            cout << "NG" << endl;
            continue;
        }

        for (int i=0; i<password.length(); i++) {
            for (int j=3; j + i + 1<password.length(); j++) {
                string sub_str = password.substr(i, j);
                if (password.find(sub_str, i+j) != string::npos) {
                    goto have_sub_str;
                }
            }
        }
        goto normal;
        have_sub_str:{
            cout << "NG" << endl;
            continue;
        } 
        normal:cout << "OK" << endl;

    }

}
// 64 位输出请用 printf("%lld")