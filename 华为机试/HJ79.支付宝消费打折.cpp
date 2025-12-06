/**
 * @nc app=nowcoder id=f8997c9b82714f058e12433a32614993 topic=37 question=46407 lang=C++
 * 2025-12-05 20:28:23
 * https://www.nowcoder.com/practice/f8997c9b82714f058e12433a32614993?tpId=37&tqId=46407
 * [HJ79] 支付宝消费打折
 */

/** @nc code=start */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> price;
    double temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        price.push_back(temp);
    }
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i ++) {
        if (a[i] == '1') {
            price[i] = price[i] * 95;
        }else {
            price[i] *= 100;
        }
    }

    sort(price.begin(), price.end());
    k *= 100;
    int i = 0;
    for (;i < n; i++) {
        if (k >= price[i]) {
            k -= price[i];
        }else {
            break;
        }
        
    }

    cout << i;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
