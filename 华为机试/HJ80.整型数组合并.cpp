/**
 * @nc app=nowcoder id=c4f11ea2c886429faf91decfaf6a310b topic=37 question=21303 lang=C++
 * 2025-12-06 10:32:31
 * https://www.nowcoder.com/practice/c4f11ea2c886429faf91decfaf6a310b?tpId=37&tqId=21303
 * [HJ80] 整型数组合并
 */

/** @nc code=start */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> a1;
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        a1.push_back(temp);
    }
    int m;
    cin >> m;
    vector<int> a2;
    for (int i =0 ; i < m; i++) {
        cin >> temp;
        a2.push_back(temp);
    }

    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());

    int i1 = 0;
    int i2 = 0;
    vector<int> res;
    while (i1 < a1.size() && i2 < a2.size()) {
        if (a1[i1] <= a2[i2]) {
            if (res.empty() || (!res.empty() && res.back() != a1[i1])) {
                    res.push_back(a1[i1]);
            }
            i1 ++;
        }else {
            if (res.empty() || (!res.empty() && res.back() != a2[i2])) {
                res.push_back(a2[i2]);
            }
            i2 ++;
        }
    }

    while (i1 < a1.size()) {
        if (*res.end() != a1[i1]) {
            res.push_back(a1[i1]);
        }
        i1 ++;
    }

    while (i2 < a2.size()) {
        if (res.back() != a2[i2]) {
            res.push_back(a2[i2]);
        }
        i2 ++;
    }
    for (auto temp   : res) {
        cout << temp;
    }
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
