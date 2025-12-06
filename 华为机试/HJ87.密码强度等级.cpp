/**
 * @nc app=nowcoder id=52d382c2a7164767bca2064c1c9d5361 topic=37 question=21310 lang=C++
 * 2025-12-06 15:13:23
 * https://www.nowcoder.com/practice/52d382c2a7164767bca2064c1c9d5361?tpId=37&tqId=21310
 * [HJ87] 密码强度等级
 */

/** @nc code=start */

#include <cctype>
#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;

    int score = 0;
    if (a.length() <= 4) {
        score += 5;
    }else if(a.length() <= 7) {
        score += 10;
    }else {
        score += 25;
    }

    bool hasAlpha = false;
    bool hasSmall = false;
    bool hasLarge = false;

    bool hasNum = false;
    int numCount = 0;

    bool hasSpecial = false;
    int specialNum = 0;
    for (auto c : a) {
        if (isalpha(c)) {
            hasAlpha = true;
            if(isupper(c)){
                hasLarge = true;
            }else {
                hasSmall = true;
            }
        }else if(c >= '0' && c <= '9'){
            hasNum = true;
            numCount ++;
        }else {
            hasSpecial = true;
            specialNum ++;
        }
    }

    if (!hasAlpha) {
        score += 0;
    }else if(hasLarge && hasSmall){
        score += 20;
    }else {
        score += 10;
    }

    if (!hasNum) {
        score += 0;
    } else if (numCount == 1) {
        score += 10;
    } else {
        score += 20;
    }

    if (!hasSpecial) {
        score += 0;
    }else if (specialNum == 1) {
        score += 10;
    } else {
        score += 25;
    }
        
    if(hasLarge && hasSmall && hasNum && hasSpecial){
        score += 5;
    }else if(hasAlpha && hasNum && hasSpecial){
        score += 3;
    }else if(hasAlpha && hasNum) {
        score +=2;
    }

    if (score >= 90) {
        cout << "VERY_SECURE" << endl;
    } else if (score >= 80) {
        cout << "SECURE" << endl;
    } else if (score >= 70) {
        cout << "VERY_STRONG" << endl;
    } else if (score >= 60) {
        cout << "STRONG" << endl;
    } else if (score >= 50) {
        cout << "AVERAGE" << endl;
    } else if (score >= 25) {
        cout << "WEAK" << endl;
    } else {
        cout << "VERY_WEAK" << endl;
    }

}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
