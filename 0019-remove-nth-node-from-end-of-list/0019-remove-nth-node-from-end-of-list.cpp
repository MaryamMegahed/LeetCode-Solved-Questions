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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      int inx=0;
      ListNode* cur=head;
      while(cur !=nullptr)
      {
        cur=cur->next;
        inx++;
      }
      if(n==inx) //the first elemet 
      {
          ListNode* toDelete=head;
          head=head->next;
          delete toDelete;
          return head;
      }
      int inxToRemove=inx-n;
      inx=0;
      cur=head;
        while(inx<inxToRemove)
       { 
         if(inx==inxToRemove-1)
         { ListNode* toDelete=cur->next;
           cur->next= cur->next->next;
           delete toDelete;
         }
         else 
           cur= cur->next;
         inx++;
       }

      return head;
      
    }
};