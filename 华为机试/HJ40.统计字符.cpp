/**
 * @nc app=nowcoder id=539054b4c33b4776bc350155f7abd8f5 topic=37 question=21263 lang=C++
 * 2025-12-04 10:55:28
 * https://www.nowcoder.com/practice/539054b4c33b4776bc350155f7abd8f5?tpId=37&tqId=21263
 * [HJ40] 统计字符
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    string a;
    getline(cin, a, '\n');

    int alphanum = 0;
    int spacenum = 0;
    int digitnum = 0;
    int othernum = 0;

    for (int i = 0; i < a.length(); i++)
    {
        if (isalpha(a[i]))
        {
            alphanum ++;
        }else if(a[i] == ' '){
            spacenum ++;
        }else if(isdigit(a[i])){
            digitnum ++;
        }else{
            othernum ++;
        }
        
    }
    cout << alphanum << endl;
    cout << spacenum << endl;
    cout << digitnum << endl;
    cout << othernum << endl;
    
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
