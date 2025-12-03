/**
 * @nc app=nowcoder id=2de4127fda5e46858aa85d254af43941 topic=37 question=21257 lang=C++
 * 2025-12-03 21:55:17
 * https://www.nowcoder.com/practice/2de4127fda5e46858aa85d254af43941?tpId=37&tqId=21257
 * [HJ34] 图片整理
 */

/** @nc code=start */

#include <iostream>
#include <algorithm>
using namespace std;

bool mycompare(char a, char b){
    return a < b;
}

int main() {
    string input;
    cin >> input;

    sort(input.begin(), input.end(), mycompare);
    cout << input;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
