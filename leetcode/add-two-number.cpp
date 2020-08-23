#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int temp = 0;

        ListNode *ans = new ListNode();
        ListNode **cursor = &ans;

        while (true)
        {

            (*cursor)->val += l1->val + temp;
            temp = (*cursor)->val / 10;
            (*cursor)->val %= 10;

            if (l1->next == NULL)
                break;

            if ((*cursor)->next == NULL)
            {
                ListNode *nextNode = new ListNode();
                (*cursor)->next = nextNode;
            }

            cursor = &(*cursor)->next;
            l1 = l1->next;
        }

        cursor = &ans;
        temp = 0;

        while (true)
        {

            (*cursor)->val += l2->val + temp;
            temp = (*cursor)->val / 10;
            (*cursor)->val %= 10;

            if (l2->next == NULL)
                break;

            if ((*cursor)->next == NULL)
            {
                ListNode *nextNode = new ListNode();
                (*cursor)->next = nextNode;
            }

            cursor = &(*cursor)->next;
            l2 = l2->next;
        }

        if (temp != 0)
        {
            while ((*cursor)->next != NULL && temp != 0)
            {
                cursor = &(*cursor)->next;
                (*cursor)->val += temp;
                temp = (*cursor)->val / 10;
                (*cursor)->val %= 10;
            }
            if ((*cursor)->next == NULL && temp != 0)
            {
                ListNode *nextNode = new ListNode(temp);
                (*cursor)->next = nextNode;
            }
        }

        return ans;
    }
};