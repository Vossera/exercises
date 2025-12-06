/**
 * @nc app=nowcoder id=4b1658fd8ffb4217bc3b7e85a38cfaf2 topic=37 question=21309 lang=C++
 * 2025-12-06 14:59:35
 * https://www.nowcoder.com/practice/4b1658fd8ffb4217bc3b7e85a38cfaf2?tpId=37&tqId=21309
 * [HJ86] 求最大连续bit数
 */

/** @nc code=start */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxlen = 0;
    int curlen = 0;

    int state = 0;
    for (int i = 0; i < 32; i++) {
        if (state == 0) {
            if ((n & 1) == 1) {
                curlen = 1;
                state = 1;
            }
        }else {
            if ((n & 1 ) == 1) {
                curlen += 1;
            } else {
                maxlen = max(maxlen, curlen);
                curlen = 0;
                state = 0;
            }
        }
        n >>= 1;
    }
    maxlen = max(maxlen, curlen);
    cout << maxlen;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
