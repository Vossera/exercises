/**
 * @nc app=nowcoder id=88ddd31618f04514ae3a689e83f3ab8e topic=37 question=21322 lang=C++
 * 2025-12-06 16:24:50
 * https://www.nowcoder.com/practice/88ddd31618f04514ae3a689e83f3ab8e?tpId=37&tqId=21322
 * [HJ99] 自守数
 */

/** @nc code=start */

#include <cmath>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;


bool zishou(int a) {
    int temp = a  * a;
    string new_str = to_string(temp);
    string old_str = to_string(a);

    string k = new_str.substr(std::distance(new_str.begin(), new_str.end() - old_str.length()), old_str.length());
    if (k == old_str) {
        return true;
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (zishou(i)) {
            res++;
        }
    }
    cout << res + 1;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
