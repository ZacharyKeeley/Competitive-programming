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
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        map <int, ListNode*> map;
        int i = 1;
        ListNode* tail = head;
        
        while (tail != NULL)
        {
            map[i++] = tail;
            tail = tail->next;
            
        }
        
        if (map.size() == 2)
        {
            map.at(1)->next = NULL;
            return map.at(1);
        }
        else if (map.size() == 1)
            return NULL;
        
        ListNode* front = map.at(map.size()/2);
        front->next = map.at(map.size()/2 + 2);
        
        return head;
    }   
};