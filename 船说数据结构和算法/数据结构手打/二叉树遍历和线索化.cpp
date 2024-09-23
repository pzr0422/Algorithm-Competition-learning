// ������������������
#include <bits/stdc++.h>
#define MAX_NODE 10
typedef struct Node{
	int data;
	int ltag, rtag;// 1: thread  0: edge
	struct Node *lchild, *rchild;
}Node;

Node *getNewNode(int data){
	Node *p = (Node *)malloc(sizeof(Node));
	p->data = data;
	p->lchild = p->rchild = NULL;
	p->ltag = p->rtag = 0;
	return p;
}

Node *insert(Node *root, int val){
	if(root == NULL) return getNewNode(val);
	if(rand() % 2) root->lchild = insert(root->lchild, val); 
	else root->rchild = insert(root->rchild, val);
	return root; 
}

//ǰ�����
void pre_order(Node *root){
	if(root == NULL) return;
	printf("%d ", root->data);
	if(root->ltag == 0) pre_order(root->lchild);
	if(root->rtag == 0) pre_order(root->rchild);
	return;
}

//������� 
void in_order(Node *root){
	if(root == NULL) return;
	if(root->ltag == 0) in_order(root->lchild);
	printf("%d ", root->data);
	if(root->rtag == 0) in_order(root->rchild);
	return;
}

//������� 
void post_order(Node *root){
	if(root == NULL) return;
	if(root->ltag == 0) post_order(root->lchild);
	if(root->rtag == 0)post_order(root->rchild);
	printf("%d ", root->data);
	return;
}

void clear(Node *root){
	if(root == NULL) return;
	if(root->ltag == 0) clear(root->lchild);
	if(root->rtag == 0) clear(root->rchild);
	free(root);
	return;
}

//�������������
Node *pre_node = NULL;//���ڼ�¼ǰ���ڵ� 
Node *in_order_first = NULL;
void __build_inorder_thread(Node *root){
	if(root == NULL) return;
	if(root->ltag == 0) __build_inorder_thread(root->lchild);
	if(pre_node == NULL) in_order_first = root;
	if(root->lchild == NULL) {
		root->lchild = pre_node;
		root->ltag = 1;
	}
	if(pre_node && pre_node->rchild == NULL){
		pre_node->rchild = root;
		pre_node->rtag = 1;
	}
	pre_node = root; 
	if(root->rtag == 0) __build_inorder_thread(root->rchild);
	return;
}

void build_inorder_thread(Node *root){
	__build_inorder_thread(root);
	pre_node->rchild = NULL;
	pre_node->rtag = 1;
	return;
}

Node *getNext(Node *node){
	if(node->rtag == 1) return node->rchild;
	//���ұ���һ����
	node = node->rchild;
	while(node->ltag == 0 && node->lchild){
		node = node->lchild;
	} 
	return node;
}


int main(void){
	srand(time(0));
	Node *root = NULL;
	for(int i = 0; i < MAX_NODE; i++){
		root = insert(root, rand() % 100);
	}
	build_inorder_thread(root);
	pre_order(root);
	printf("\n");
	in_order(root);
	printf("\n");
	post_order(root);
	printf("\n");
	
	//����������--�������Ա������ṹ
	printf("in_order_thread:\n");
	Node *node = in_order_first;
	while(node){
		printf("%d ", node->data);
		node = getNext(node);
	} 
	clear(root);
	return 0;
} 
























