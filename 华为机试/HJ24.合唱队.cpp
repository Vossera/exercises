/**
 * @nc app=nowcoder id=6d9d69e3898f45169a441632b325c7b4 topic=37 question=21247 lang=C++
 * 2025-12-03 15:49:24
 * https://www.nowcoder.com/practice/6d9d69e3898f45169a441632b325c7b4?tpId=37&tqId=21247
 * [HJ24] 合唱队
 */

/** @nc code=start */

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> students;
    int height;

    for (int i = 0; i < n; i++)
    {
        cin >> height;
        students.push_back(height);
    }

    vector<int> dp1(n, 1);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (students[i] > students[j])
            {
                dp1[i] = max(dp1[j] + 1, dp1[i]);
            }
        }
    }

    vector<int> dp2(n, 1);
    for (int i = n-1; i > 0; i--)
    {
        for (int j = n-1; j > i; j--)
        {
            if (students[i] > students[j])
            {
                dp2[i] = max(dp2[j] + 1, dp2[i]);
            }
        }
    }

    int max_len = 0;
    for (int i = 0; i < n; i++)
    {
        max_len = max(dp1[i] + dp2[i] - 1, max_len);
    }

    cout << n - max_len;
    
    
    
    
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
