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
    int getDecimalValue(ListNode* head) {
        
        //approaches - 1. reverse the ll 2. find length of ll then put (len-1) power of 2 on head. 3. single pass - this one
        
        int ans =0;
        ListNode* temp=head;
        while(temp){
            ans*=2;
            ans+=temp->val;
            temp=temp->next;
        }
        return ans;
        
    }
};