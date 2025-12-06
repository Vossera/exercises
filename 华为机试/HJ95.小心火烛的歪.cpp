/**
 * @nc app=nowcoder id=6cdb80dbb66c42eea179068a4afb25db topic=37 question=43285 lang=C++
 * 2025-12-06 16:33:12
 * https://www.nowcoder.com/practice/6cdb80dbb66c42eea179068a4afb25db?tpId=37&tqId=43285
 * [HJ95] 小心火烛的歪
 */

/** @nc code=start */

#include <cmath>
#include <iostream>
#include <bitset>
#include <vector>
using namespace std;


int main() {
    int n,m,q;
    cin >> n >> m >> q;

    bitset<49> a, b[7];
    string s = "";
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        s += temp;
    }
    bitset<49> allone = bitset<49>().set();
    allone <<= m * n;
    a = bitset<49>(s);
    a = a | allone;
    

    for (int i = 0; i < q; i ++) {
        s = "";
        for (int j = 0; j < n; j++) {
            string temp;
            cin >> temp;
            s += temp;
        }
        b[i] = bitset<49>(s);
    }

    bitset<49> temp(0);
    int res_start;
    int minlength = 88;
    bool flag = false;

    unsigned int mmmm;
    unsigned int res;
    for (mmmm = 0; mmmm < pow(2, q); mmmm++) {
        temp.reset();
        unsigned int k = mmmm;
        int startIndex = 0;
        int len = 0;
        while (k) {
            if ((k & 1) == 1) {
                temp |= b[startIndex];
                len ++;
            }
            k >>= 1;
            startIndex ++;
        }

        if (~temp == a && minlength > len) {
            res = mmmm;
            minlength = len;
        }
    }

    if ((res == 0 && ~a != 0) || minlength == 88) {
        cout << -1;
        return 0 ;
    }
    if (~a == 0 && res == 0) {
        cout << 0;
        return 0;
    }
    cout << minlength << endl;
    unsigned int k = res;
    int qq = q;
    int start_index = 0;
    while (qq) {
        if ((k & 1 )== 1) {
            cout << start_index + 1 << ' ';
        }
        start_index ++;
        k >>= 1;
        qq--;
    }




}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
