/**
 * @nc app=nowcoder id=769d45d455fe40b385ba32f97e7bcded topic=37 question=21296 lang=C++
 * 2025-12-05 19:55:28
 * https://www.nowcoder.com/practice/769d45d455fe40b385ba32f97e7bcded?tpId=37&tqId=21296
 * [HJ73] 计算日期到天数转换
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int daysOfMonths[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int a, b, c;
    cin >> a >> b >> c;

    bool is_run = (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
    if (is_run) {
        daysOfMonths[2] += 1;
    }
    int days = 0;
    for (int i = 1; i < b; i++) {
        days += daysOfMonths[i];
    }

    days += c;
    cout << days;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
