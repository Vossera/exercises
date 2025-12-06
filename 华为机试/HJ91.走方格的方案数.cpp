/**
 * @nc app=nowcoder id=e2a22f0305eb4f2f9846e7d644dba09b topic=37 question=21314 lang=C++
 * 2025-12-06 16:07:56
 * https://www.nowcoder.com/practice/e2a22f0305eb4f2f9846e7d644dba09b?tpId=37&tqId=21314
 * [HJ91] 走方格的方案数
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> n >> m;

    int dp[10][10] = {0};
    for (int i = 0; i <= 9; i++) {
        dp[i][0] = 1;
        dp[0][i] = 1;
    }

    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= m; j ++) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    cout << dp[n][m];
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
