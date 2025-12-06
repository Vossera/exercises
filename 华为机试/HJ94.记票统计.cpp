/**
 * @nc app=nowcoder id=3350d379a5d44054b219de7af6708894 topic=37 question=21317 lang=C++
 * 2025-12-06 16:18:07
 * https://www.nowcoder.com/practice/3350d379a5d44054b219de7af6708894?tpId=37&tqId=21317
 * [HJ94] 记票统计
 */

/** @nc code=start */

#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int m, n;
    map<string, int> records;

    cin >> n;
    vector<string>  names;
    for (int i = 0 ; i < n; i++) {
        string temp;
        cin >> temp;
        records.insert(make_pair(temp, 0));
        names.push_back(temp);
    }

    cin >> m;
    int invalidCount = 0;
    for (int i = 0; i< m; i++){
        string temp;
        cin >>temp;
        if (records.find(temp) != records.end()) {
            records[temp] += 1;
        }else {
            invalidCount ++;
        }
    }

    for (auto name : names) {
        cout << name << " : " << records[name] << endl;
    }
    cout << "Invalid : " << invalidCount;



}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
