/**
 * @nc app=nowcoder id=54404a78aec1435a81150f15f899417d topic=37 question=21274 lang=C++
 * 2025-12-04 18:07:15
 * https://www.nowcoder.com/practice/54404a78aec1435a81150f15f899417d?tpId=37&tqId=21274
 * [HJ51] 输出单向链表中倒数第k个结点
 */

/** @nc code=start */

#include <cstddef>
#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode* m_pNext;
};
int main() {
    int node_num;


    while (cin >> node_num) {
        struct ListNode *head = new struct ListNode;
        struct ListNode *pre = head;
        for (int i = 0 ; i < node_num; i++) {
            int value;
            cin >> value;
            struct ListNode *l1 = new struct ListNode;
            pre->m_pNext = l1;
            l1->val = value;
            l1->m_pNext = NULL;
            pre = l1;
        }
        int k ;
        cin >> k;
        struct ListNode* cur = head;
        for (int i = 0; i < node_num - k + 1; i++) {
            cur = cur->m_pNext;
        }
        cout << cur->val << endl;
    }
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
