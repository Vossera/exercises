/**
 * @nc app=nowcoder id=22fdeb9610ef426f9505e3ab60164c93 topic=37 question=21304 lang=C++
 * 2025-12-06 11:03:39
 * https://www.nowcoder.com/practice/22fdeb9610ef426f9505e3ab60164c93?tpId=37&tqId=21304
 * [HJ81] 字符串字符匹配
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    bool flag = true;
    for (auto c : s) {
        int index1 = -1;
        bool flag2 = false;
        for (auto c2: t) {
            if (c2 == c) {
                flag2 = true;
            }
        }
        if(!flag2){
            flag = false;
        }
    }

    if (flag) {
        cout << "true";
    }else {
        cout << "false";
    }
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
