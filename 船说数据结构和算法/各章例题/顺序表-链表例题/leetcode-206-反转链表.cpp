//��ת���� leetcode-206
#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//�ǵݹ鷽��1����ԭ�����ϲ��� 
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *p = head, *save1 = NULL, *save2;
	while(p){
		save2 = p->next;
		//��ת���� 
		p->next = save1;
		save1 = p;
		p = save2;
	} 
	return save1;//��ͼ��� 
}

//�ǵݹ鷽��2���½�һ������ 
struct ListNode* reverseList(struct ListNode* head){
	struct ListNode new_head;
	new_head.next = NULL;
	for(struct ListNode* p = head, *q; p; p = q){
		q = p->next;
		p->next = new_head.next;
		new_head.next = p;
	}
	return new_head.next;
}

//�ݹ鷽�� 
struct ListNode* reverseList(struct ListNode* head){
	//�߽��������������ֻ��һ���ڵ������ 
	if(head == NULL || head->next == NULL) return head;
	struct ListNode* node = head->next;
	struct ListNode* new_head = reverseList(node);//��ȡ��ͷ�ڵ��ⷴת�������ͷ�ڵ�λ��
	head->next = node->next;
	node->next = head;
	return new_head;
}





















