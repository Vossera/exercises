/**
 * @nc app=nowcoder id=40bf74658879460bbf5f1bfe772e8580 topic=37 question=46404 lang=C++
 * 2025-12-04 11:03:08
 * https://www.nowcoder.com/practice/40bf74658879460bbf5f1bfe772e8580?tpId=37&tqId=46404
 * [HJ47] 【模板】排序
 */

/** @nc code=start */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool mycmp(int a, int b){
    return a < b;
}
int main() {
    vector<int> a1;
    int n;
    cin >> n;
    int k;
    while (cin >> k)
    {
        a1.push_back(k);
    }

    sort(a1.begin(), a1.end(), mycmp);
    for (int i = 0; i < a1.size(); i++)
    {
        cout << a1[i] << ' ';
    }
    
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
