/**
 * @nc app=nowcoder id=5190a1db6f4f4ddb92fd9c365c944584 topic=37 question=21249 lang=C++
 * 2025-12-03 16:44:26
 * https://www.nowcoder.com/practice/5190a1db6f4f4ddb92fd9c365c944584?tpId=37&tqId=21249
 * [HJ26] 字符串排序
 */

/** @nc code=start */

#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    char store[128][1000] = {'\0'};
    int index[128] = {0};
    vector<int> space_index;
    string input;

    getline(cin, input, '\n');
    
    for(int i=0; i<input.length(); i++){
        char c = input[i];
        if (isalpha(c))
        {
            store[tolower(c)][index[tolower(c)]] = c;
            index[tolower(c)] += 1;
        }
    }
    string temp;
    for (int i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < index[i]; j++)
        {
            temp.push_back(store[i][j]);
        }
    }
    int indexoftemp = 0;
    for (int i = 0; i < input.length(); i++)
    {
        char c = input[i];
        if (!isalpha(c))
        {
            cout << c;
        }else {
            cout << temp[indexoftemp];
            indexoftemp++;
        }
    }
    

}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
