/**
 * @nc app=nowcoder id=56735b3fe2fc4ed5916f5427dc787156 topic=37 question=43282 lang=C++
 * 2025-12-04 10:59:55
 * https://www.nowcoder.com/practice/56735b3fe2fc4ed5916f5427dc787156?tpId=37&tqId=43282
 * [HJ42] 构造C的歪
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) { // 注意 while 处理多个 case
        cout << max(a, b) + abs(a-b);
    }
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
