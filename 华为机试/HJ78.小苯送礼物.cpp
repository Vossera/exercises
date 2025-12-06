/**
 * @nc app=nowcoder id=466e02d2177845589ab5fa5decc2857f topic=37 question=46406 lang=C++
 * 2025-12-06 10:19:38
 * https://www.nowcoder.com/practice/466e02d2177845589ab5fa5decc2857f?tpId=37&tqId=46406
 * [HJ78] 小苯送礼物
 */

/** @nc code=start */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct fans {
    int id;
    int like;
    int collect;
    int approve_level;
};

bool mycompare(struct fans* a, struct fans* b){
    if (a->approve_level > b->approve_level) {
        return true;
    } else if(a->approve_level == b->approve_level && a->collect != b->collect){
        return a->collect > b->collect;
    } else if(a->approve_level == b->approve_level && a->collect == b->collect){
        return a->id < b->id;
    }else {
        return false;
    }
}
int main() {
    int n, k;
    cin >> n >> k;

    vector<struct fans*> fans_of_xioaben;
    vector<int> ids;
    int like;
    int collect;

    for (int i = 0; i < n; i++) {
        cin >> like >> collect;
        struct fans *temp = new struct fans;
        temp->like = like;
        temp->collect = collect;
        temp->id  = i;
        temp->approve_level = like + collect * 2;
        fans_of_xioaben.push_back(temp);
    }

    sort(fans_of_xioaben.begin(), fans_of_xioaben.end(),mycompare);

    for (int i = 0; i < k; i++) {
        ids.push_back(fans_of_xioaben[i]->id);
    }

    sort(ids.begin(), ids.end());
    for (auto id : ids) {
        cout << id + 1 << ' ';
    }
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
