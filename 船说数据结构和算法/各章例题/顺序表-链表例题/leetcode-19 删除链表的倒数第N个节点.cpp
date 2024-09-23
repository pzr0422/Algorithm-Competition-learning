// leetcode-19 ɾ������ĵ�����N���ڵ� ��ע��߽�������ʹ������ͷ�ڵ�������⣩ 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(head == NULL) return head;
	struct ListNode new_head;
	new_head.next = head;
	struct ListNode *p = &new_head, *q = p;
	for(int i = 0; i <= n; i++) q = q->next;
	while(q){
		q = q->next;
		p = p->next;
	}
	p->next = p->next->next;
	return new_head.next;
}
