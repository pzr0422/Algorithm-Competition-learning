	// ���������л�(serialize)�Լ������л�(deserialize)--->ʹ�ù����
#include <bits/stdc++.h>
#define KEY(n) (n ? n->data : -1)
typedef struct Node{
	int data;
	struct Node *lchild, *rchild;
}Node;

Node *getNewNode(int val){
	Node *p = (Node *)malloc(sizeof(Node));
	p->data = val;
	p->lchild = p->rchild = NULL;
	return p;
}

Node *insert(Node *root, int val){
	if(root == NULL) return getNewNode(val);
	if(rand() % 2) root->lchild = insert(root->lchild, val);
	else root->rchild = insert(root->rchild, val);
	return root;
}

Node *getRandomBT(int num){
	Node *root = NULL;
	for(int i = 0; i < num; i++){
		root = insert(root, rand() % 100);
	}
	return root;
}


void clear(Node *root){
	if(root == NULL) return;
	clear(root->lchild);
	clear(root->rchild);
	free(root);
	return;
}

char buff[1000];
int len = 0;

void __serialize(Node *root){
	if(root == NULL) return;
	//root
	//ע��printf�ຯ���ķ���ֵ��ʲô 
	len += sprintf(buff + len, "%d", root->data);
	if(root->lchild == NULL && root->rchild == NULL) return;
	else len += sprintf(buff + len, "(");
	//lchild
	__serialize(root->lchild);	
	//rchild
	if(root->rchild){
		len += sprintf(buff + len, ",");
		__serialize(root->rchild);
	}
	len += sprintf(buff + len, ")");
	return ;
}

void serialize(Node *root){
	//����ʼ��
	memset(buff, 0, sizeof(buff));
	len = 0;
	//��װ���� 
	__serialize(root); 
}

Node *deserialize(char *buff, int len){
	//ʹ������ά��һ��ջ
	Node **s = (Node **)malloc(sizeof(Node *));
	int top = -1;//ջ����ʶ
	int flag = 0;//���ڱ�ʶ��ǰ����������0��������������1��
	int scode = 0;//״̬��,�����жϵ�ǰӦ��ִ��ʲô���� 
	Node *p = NULL;
	Node *root = NULL;
	for(int i = 0; buff[i]; i++){
		switch(scode){
			//���scode=0����ô�͸��ݵ�ǰbuff[i]��ֵ���ַ�����(Ҳ���Ǹı�scode��ֵ) 
			case 0: {
				if(buff[i] >= '0' && buff[i] <= '9') scode = 1;
				if(buff[i] == '(') scode = 2;
				if(buff[i] == ',') scode = 3;
				if(buff[i] == ')') scode = 4;
				i--;
				break;
			}
			case 1:{
				int num = 0;//���ڻ�ȡ�������� 
				//С���� 
				while(buff[i] >= '0' && buff[i] <= '9'){
					num = num * 10 + (buff[i] - '0');
					i++;
				}
				i--;
				p = getNewNode(num);
				if(top >= 0){
					if(flag == 1) s[top]->rchild = p;
					else s[top]->lchild = p;
				}
				scode = 0;//ÿ��ѭ����Ҫ���·ַ����� 
				break;
			}
			//ѹջ 
			case 2:{
				s[++top] = p;
				flag = 0;
				scode = 0;
				break;
			}
			case 3:{
				flag = 1;//תΪ������ 
				scode = 0;
				break;
			}
			//��ջ 
			case 4:{
				root = s[top];
				--top;
				scode = 0;
				break;
			}
		}
			
	}
	return root;
} 

void print(Node *node){
	printf("%d(%d, %d)\n", KEY(node), KEY(node->lchild), KEY(node->rchild));
}

void output(Node *root){
	if(root == NULL) return;
	print(root);
	output(root->lchild);
	output(root->rchild);
	return;
}

int main(void){
	srand(time(0));
	#define MAX_NODE 10
	Node *root = getRandomBT(MAX_NODE);
	serialize(root);
	printf("ԭ������:\n");
	output(root);
	printf("\n");
	printf("buff[]:%s\n", buff);
	printf("\n");
	printf("�����л�ԭ�������Ľ��:\n");
	Node *new_root = deserialize(buff, strlen(buff));
	output(new_root);//�����л�֮ǰ��������Ա� 
	return 0;
} 























