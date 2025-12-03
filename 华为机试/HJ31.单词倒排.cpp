/**
 * @nc app=nowcoder id=81544a4989df4109b33c2d65037c5836 topic=37 question=38366 lang=C++
 * 2025-12-03 21:08:38
 * https://www.nowcoder.com/practice/81544a4989df4109b33c2d65037c5836?tpId=37&tqId=38366
 * [HJ31] 单词倒排
 */

/** @nc code=start */

#include <iostream>
#include <vector>
#include <cctype>
#include <regex>
using namespace std;

int main() {
    string a;
    getline(cin, a, '\n');
    int start = 0;
    int length = 0;
    vector<string> results;
    for (int i = 0; i < a.length(); i++)
    {
        if (isalpha(a[i]))
        {
            length++;
        }else {
            if (length > 0)
            {
                string temp = a.substr(start, length);
                results.push_back(temp);
                length = 0;
            }
            start = i + 1;
        }
    }
    string temp = a.substr(start, length);
    results.push_back(temp);
    for (int i = results.size() - 1; i >= 0 ; i--)
    {
        cout << results[i] << ' ';
    }
    
    
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
