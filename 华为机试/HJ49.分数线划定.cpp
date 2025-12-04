/**
 * @nc app=nowcoder id=2395fa7b6c6e452e8d8310a7cfdbe902 topic=37 question=46405 lang=C++
 * 2025-12-04 11:09:23
 * https://www.nowcoder.com/practice/2395fa7b6c6e452e8d8310a7cfdbe902?tpId=37&tqId=46405
 * [HJ49] 分数线划定
 */

/** @nc code=start */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// struct volunteer {
//     int order;
//     int grade;
// };

class volunteer{
public: int order;
        int grade;

    volunteer(){
        this->order = 0;
        this->grade = 0;
    }
    volunteer(int order, int grade){
        this->order = order;
        this->grade = grade;
    }
    ~volunteer(){

    }

};

bool mycompare(volunteer* a,  volunteer *b){
    if (a->grade > b->grade) {
        return true;
    } else if (a->grade < b->grade) {
        return false;
    } else {
        return a->order < b->order;
    }
}
int main() {
    int n, m;
    cin >> n >> m;

    int t = static_cast<int>(1.5 * m);
    vector<volunteer*> records;

    volunteer * temps = new volunteer[10];
    int order, grade;
    for (int i =0; i < n; i++) {
        cin >> order >> grade;
        volunteer *temp = new volunteer(order, grade);
        records.push_back(temp);
    }

    sort(records.begin(), records.end(), mycompare);


    int enter_mianshi = 0;
    for (auto record : records) {
        if (record->grade >= records[t-1]->grade) {
            enter_mianshi ++;
        }else {
            break;
        }
    }
    cout << records[t-1]->grade << ' ' << enter_mianshi << endl;
    for (int i = 0; i < enter_mianshi; i++) {
        cout << records[i]->order << ' ' << records[i]->grade << endl;
    }

}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
