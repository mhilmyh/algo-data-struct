#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 1;
        ListNode* p = head;
        
        while (p->next != NULL) {
            p = p->next;
            cnt++;
        }
        cnt -= n;
        
        if (cnt == 0) return head->next;
        
        p = head;
        while(--cnt > 0) p = p->next;
        
        p->next = p->next->next;
        return head;
    }
};