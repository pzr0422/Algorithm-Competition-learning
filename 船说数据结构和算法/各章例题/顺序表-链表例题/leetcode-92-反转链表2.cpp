// leetcode-92-��ת����2
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//����һ���ǵݹ�� �����н�����4ms��������38.94%���ˣ� 
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    //����Ϊ�ջ���Ҫ��ת�Ĳ���ֻ��һ���ڵ�ʱ�������� 
	if(head == NULL || left == right) return head;
	struct ListNode new_head;
	new_head.next = head;
	struct ListNode* p = &new_head, *q, *left_node, *right_node, *tool;
	
	//leftָ����߽�ǰ�Ľڵ� , rightָ���ұ߽��Ľڵ� 
	for(int i = 1; i < left; i++){
		p = p->next;
	}
	left_node = p;
	q = p->next;
	
	struct ListNode new_left;
	new_left.next = NULL;
	tool = q;
	for(int i = 0; i < right - left + 1; i++){
		tool = q->next;
		q->next = new_left.next;
		new_left.next = q;
		q = tool;
	}
	left_node->next = new_left.next;//1-4-3-2
	struct ListNode* find_right = new_left.next;
	while(find_right->next){
		find_right = find_right->next;
	}
	find_right->next = q;
	return new_head.next;
} 

//���������ݹ�� ����˼·�����ֵݹ���̣� (��ʱ���ڴ����������Լ�д��Ҫ��) 
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
	if(left == 1 && right == 1) return head;
	//��һ�ֵݹ飺��߽粻�ڷ�ת��Χ�� 
	if(left != 1) {
		head->next = reverseBetween(head->next, left - 1, right - 1);
		return head;
	}
	//�ڶ��ֵݹ飺��߽��ڷ�ת��Χ��(�뷴ת����1��ͬ)
	else{
		struct ListNode* tail = head->next, *new_head;
		new_head = reverseBetween(head->next, left, right - 1);
		head->next = tail->next;
		tail->next = head;
		return new_head; 
	} 
} 







