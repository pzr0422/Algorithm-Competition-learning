#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct Stack {
    char *data; // ���ݴ洢��
    int size;   // ջ�Ŀռ��С
    int top;    // ջ��ָ��
} Stack;

// ջ�ĳ�ʼ��
Stack *init_Stack(int n) {
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->size = n;
    s->data = (char *)malloc(sizeof(char) * n);
    s->top = -1;
    return s;
}

// �пղ���
int empty(Stack *s) {
    return s->top == -1;
}

// �鿴ջ��Ԫ��
char top(Stack *s) {
    if (empty(s))
        return -1;
    return s->data[s->top];
}

// ��ָ��Ԫ��ѹ��ջ��
int push(Stack *s, char val) {
    if (s->top + 1 == s->size)
        return 0;
    s->data[++s->top] = val;
    return 1;
}

// ����ջ��Ԫ��
int pop(Stack *s) {
    if (empty(s))
        return 0;
    s->top--;
    return 1;
}

// ����ջ�ռ�
void clear_Stack(Stack *s) {
    if (s == NULL)
        return;
    free(s->data);
    free(s);
    return;
}

bool isValid(char *s) {
    Stack *stack = init_Stack(5000);
    bool judge = true;
    while (*s) {
        if (*s == '(' || *s == '[' || *s == '{') {
            push(stack, *s);
        } else {
            if (empty(stack)) {
                judge = false;
                break;
            }
            switch (*s) {
                case ')': {
                    if (top(stack) == '(') pop(stack);
                    else
                        judge = false;
                    break;
                }
                case ']': {
                    if (top(stack) == '[') pop(stack);
                    else
                        judge = false;
                    break;
                }
                case '}': {
                    if (top(stack) == '{') pop(stack);
                    else
                        judge = false;
                    break;
                }
            }
        }
        if (judge == false)
            break;
        s++;
    }
    judge = judge && empty(stack); // ���ջ�Ƿ�Ϊ��
    clear_Stack(stack);
    return judge;
}

//���ݹ���������
bool isValid(char *s){
	int s_lnum = 0, s_rnum = 0, m_lnum = 0, m_rnum = 0, l_lnum = 0, l_rnum = 0;
	bool judge = true;
	for(int i = 0; i < strlen(s); i++){
		switch(s[i]){
			case '(':
				s_lnum++;
				break;
			case '{':
				l_lnum++;
				break;
			case '[':
				m_lnum++;
				break;
			case ')':
				s_rnum++;
				break;
			case '}':
				l_rnum++;
				break;
			case ']':
				m_rnum++;
				break;
		}
		if(s_lnum < s_rnum || m_lnum < m_rnum || l_lnum < l_rnum ) {
			judge = false;
			break;
		}
	}
	if(s_lnum != s_rnum || m_lnum != m_rnum || l_lnum != l_rnum) judge = false;
	return judge;
} 

































