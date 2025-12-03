/**
 * @nc app=nowcoder id=649b210ef44446e3b1cd1be6fa4cab5e topic=37 question=21258 lang=C++
 * 2025-12-03 22:01:08
 * https://www.nowcoder.com/practice/649b210ef44446e3b1cd1be6fa4cab5e?tpId=37&tqId=21258
 * [HJ35] 蛇形矩阵
 */

/** @nc code=start */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }
    int k = 1;

    for (int i = 0; i < n; i++)
    {
        int x = i;
        int y = 0;
        for (int j = 0; j <= i; j++)
        {
            a[x][y] = k;
            k++;
            x -= 1;
            y += 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                cout << a[i][j] << ' ';
            }
        }
        cout << endl;
    }
    
    
    
    
    
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
