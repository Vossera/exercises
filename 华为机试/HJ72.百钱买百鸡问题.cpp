/**
 * @nc app=nowcoder id=74c493f094304ea2bda37d0dc40dc85b topic=37 question=21295 lang=C++
 * 2025-12-05 19:50:34
 * https://www.nowcoder.com/practice/74c493f094304ea2bda37d0dc40dc85b?tpId=37&tqId=21295
 * [HJ72] 百钱买百鸡问题
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int y = 0;
    int z = 0;

    for(x = 0; x <= 20; x ++){
        for (y = 0; y <= 33; y++) {
            z = 100 - x - y;
            if (5 * x + 3 * y + z / 3 == 100 && z % 3 == 0) {
                cout << x << ' ' << y << ' ' << z << endl;
            }
        }
    }
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
