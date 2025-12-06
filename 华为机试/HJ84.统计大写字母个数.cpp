/**
 * @nc app=nowcoder id=434414efe5ea48e5b06ebf2b35434a9c topic=37 question=21307 lang=C++
 * 2025-12-06 14:46:08
 * https://www.nowcoder.com/practice/434414efe5ea48e5b06ebf2b35434a9c?tpId=37&tqId=21307
 * [HJ84] 统计大写字母个数
 */

/** @nc code=start */

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
        for (curlen=1; curlen + start < s.length(); curlen++ ) {
            cout << s.substr(start, curlen) << endl;
        }
    }


}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
