// leetcode-141-��������1

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
//ʹ�ÿ���ָ�� 
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast = head, *slow = head;
    while(fast && fast->next){
    	fast = fast->next->next;
    	slow = slow->next;
    	if(fast == slow) return true;
	}
	return false;
} 
