// leetcode-2 两数相加 
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = NULL; //结果链表的头 
        ListNode *p = NULL; // 工具节点
        int a = 0; // 表示两数相加后的进位（灵魂） 
		while(l1 && l2){
			int sum = l1->val + l2->val + a;
			if(!p){
				p = new ListNode(sum % 10);
			}
			else{
				p->next = new ListNode(sum % 10);
				p = p->next;
			}
			if(!head) head = p;
			a = sum / 10;
			l1 = l1->next;
			l2 = l2->next;
		}
		// 处理剩下的部分 
		while(l1){
			p->next = new ListNode((l1->val + a) % 10);
			a = (l1->val + a) / 10;
			p = p->next;
			l1 = l1->next;
			
		} 
		while(l2){
			p->next = new ListNode((l2->val + a) % 10);
			a = (l2->val + a) / 10;
			p = p->next;
			l2 = l2->next;
		}
		// 若还有进位，继续记录到结果链表中
		if(a){
			p->next = new ListNode(a);
		} 
		return head;
    }
};
