/**
 * @nc app=nowcoder id=12e081cd10ee4794a2bd70c7d68f5507 topic=37 question=21308 lang=C++
 * 2025-12-06 14:54:41
 * https://www.nowcoder.com/practice/12e081cd10ee4794a2bd70c7d68f5507?tpId=37&tqId=21308
 * [HJ85] 最长回文子串
 */

/** @nc code=start */


#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;


bool ishuiwen(string s){
    
    int i1 = 0;
    int i2 = s.length() - 1;
    while (i1 != s.length() - 1) {
        if (s[i1] != s[i2]) {
            return false;
        }
        i1 ++;
        i2 --;
    }
    return true;
}
int main() {
    string s;
    getline(cin, s, '\n');

    int maxlen = 0;
    int curlen = 1;
    int start = 0;
    for(; start < s.length(); start++){
        for (curlen=1; curlen + start <= s.length(); curlen++ ) {
            string temp = s.substr(start, curlen);
            if (ishuiwen(temp)) {
                maxlen = max(maxlen, curlen);
            }
        }
    }
    cout << maxlen;


}
// 64 位输出请用 printf("%lld")

/** @nc code=end */

