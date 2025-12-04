/**
 * @nc app=nowcoder id=1221ec77125d4370833fd3ad5ba72395 topic=37 question=21260 lang=C++
 * 2025-12-04 10:42:06
 * https://www.nowcoder.com/practice/1221ec77125d4370833fd3ad5ba72395?tpId=37&tqId=21260
 * [HJ37] 统计每个月兔子的总数
 */

/** @nc code=start */

#include <iostream>
using namespace std;

long long results[32];
int main() {
    int k;
    cin >> k;

    results[1] = 1;
    results[2] = 1;

    for (int i = 3; i <= 31; i++)
    {
        results[i] = results[i-1] + results[i-2];
    }
    cout << results[k];
    
    
    
    

}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
