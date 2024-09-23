#include <bits/stdc++.h>

typedef struct Node {
	int key;
	struct Node *lchild, *rchild;
}Node;

Node *getNewNode(int val){
	Node *p = (Node *)malloc(sizeof(Node));
	p->key = val;
	p->lchild = p->rchild = NULL;
	return p;
}

//���ظ��ڵ��ַ 
Node *insert(Node *root, int val){
	//�߽����� 
	if(root == NULL) return getNewNode(val);
	//�ݹ飬�ҵ��սڵ�-->�����½ڵ㣻��ǰ�ڵ㲻Ϊ��-->ֱ�ӷ��� 
	if(rand() % 2) root->lchild = insert(root->lchild, val);
	else root->rchild = insert(root->rchild, val);	
	return root;
}

Node *queue[12];
int head = 0, tail = 0;
//������ȱ��������������ʹ�ö��У� 
void bfs(Node *root){
	printf("BFS:\n");
	queue[0] = root;
	tail++;
	while(head < tail){
		Node *node = queue[head];
		printf("\nNode:%d\n", node->key);
		if(node->lchild) {
			queue[tail++] = node->lchild;
			printf("\t%d->%d(left)", node->key, node->lchild->key);
		}
		if(node->rchild) {
			queue[tail++] = node->rchild;
			printf("\t%d->%d(right)", node->key, node->rchild->key);
		}
		head++;
	}
	return;
}

//������ȱ�����ʹ��ջ���ݹ����� 
//��¼�ڵ���ջ��ջ��ʱ���tot
int tot = 0; 
void dfs(Node *root){
	//�߽�����
	if(root == NULL) return; 
	int start = 0, end = 0;
	tot++;
	start = tot;
	//��ʼ�Ӵ˽ڵ�����ӿ�ʼ���� 
	if(root->lchild) dfs(root->lchild);
	if(root->rchild) dfs(root->rchild);
	//ֱ������������Ϊ����ʱ��ֹͣ���� 
	tot++;
	end = tot;
	printf("%d : [%d, %d]\n", root->key, start, end);
	return;
} 

void clear(Node *root){
	if(root == NULL) return;
	clear(root->lchild);
	clear(root->rchild);
	free(root);
	return; 
}

int main(void){
	srand(time(0));
	#define MAX_NODE 10
	//���ڵ��ַ��ʼ��Ϊ�յ�ַ 
	Node *root = NULL;
	for(int i = 0; i < MAX_NODE; i++){
		root = insert(root, rand() % 100); 
	}
	bfs(root);
	printf("\n\n");
	printf("DFS:\n");
	dfs(root);
	clear(root);
	return 0;
}





















