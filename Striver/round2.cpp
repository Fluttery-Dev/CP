#include <bits/stdc++.h>

using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        // for(int i=0;i<n;i++){
        //     if(lists[i]!=NULL){
        //         ans=lists[i];
        //         z=i;
        //         break;
        //     }
        // }
        if (lists.size() == 0)
            return NULL;
        int n = lists.size();
        ListNode *ans = new ListNode(0);
        int z = -1;
        for (int i = 0; i < n; i++)
        {
            if (lists[i] != NULL)
            {
                ans = lists[i];
                z = i;
                break;
            }
        }
        if (z == -1)
            ans = NULL;
        for (int i = z + 1; i < n; i++)
        {
            if (lists[i] == NULL)
                continue;
            ListNode *dummy = new ListNode(0);
            dummy->next = ans;
            ListNode *a = ans;
            ListNode *b = lists[i];
            ListNode *c = b->next;
            if (b->val < a->val)
            {
                b->next = dummy->next;
                dummy->next = b;
                ans = b;
                a = b;
                b = c;
            }
            while (b)
            {
                while (a->next && a->next->val < b->val)
                    a = a->next;
                c = b->next;
                b->next = a->next;
                a->next = b;
                b = c;
            }
        }
        return ans;
            
    }
};