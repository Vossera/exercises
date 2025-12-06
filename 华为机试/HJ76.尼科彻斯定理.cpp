/**
 * @nc app=nowcoder id=dbace3a5b3c4480e86ee3277f3fe1e85 topic=37 question=21299 lang=C++
 * 2025-12-05 20:03:30
 * https://www.nowcoder.com/practice/dbace3a5b3c4480e86ee3277f3fe1e85?tpId=37&tqId=21299
 * [HJ76] 尼科彻斯定理
 */

/** @nc code=start */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = pow(n, 3);
    
    int m = n * (n - 1) / 2;

    int start = 2 * m + 1;
    for(int i = 1; i <= n; i++){
        cout << start + (i - 1) * 2 << (i == n ? ' ': '+');
    }
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
