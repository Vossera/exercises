/**
 * @nc app=nowcoder id=a30bbc1a0aca4c27b86dd88868de4a4a topic=37 question=21269 lang=C++
 * 2025-12-04 11:02:03
 * https://www.nowcoder.com/practice/a30bbc1a0aca4c27b86dd88868de4a4a?tpId=37&tqId=21269
 * [HJ46] 截取字符串
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s;
    cin >> k;
    cout << s.substr(0, k);
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
