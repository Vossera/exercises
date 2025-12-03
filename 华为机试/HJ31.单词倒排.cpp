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
    smatch results;
    regex pattern("[a-zA-Z]+");

    string::const_iterator searchIter(a.cbegin());
    
    vector<string> res;
    while (regex_search(searchIter, a.cend(), results, pattern))
    {
        // cout << (searchIter == a.cbegin() ? "" : " ") << results[0];
        res.push_back(results[0]);
        searchIter = results.suffix().first;
    }
    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i] << ' ';
    }
    
    
    
    
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
