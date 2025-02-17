// KMP�㷨ʾ��
#include <bits/stdc++.h>
using namespace std;
int *getNext(const char *t){
	int tlen = strlen(t);
	int *next = (int *)malloc(sizeof(int) * tlen);
	next[0] = -1;
	int j = -1;
	for(int i = 1; i < tlen; i++){
		while(j != -1 && t[i] != t[j + 1]) j = next[j]; // uv�ַ������ʱ
		if(t[i] == t[j + 1]) j += 1;
		next[i] = j;
	}
	return next;
}

int KMP(const char *s, const char *t){
	int *next = getNext(t); // ��ȡģʽ����next���� 
	int j = -1;
	for(int i = 0; s[i]; i++){
		while(j != -1 && s[i] != t[j + 1]) j = next[j]; // ����ǰ�ַ���ƥ�䣬ģʽ������next������Ϣ������ת
		if(s[i] == t[j + 1]) j += 1;
		if(t[j + 1] == 0) return i - strlen(t) + 1; // ƥ��ɹ�(��ƥ�䵽'\0'�ַ�)
	}
	return -1; // ���û��ƥ��ɹ�������-1 
} 

int main(void){
	char s[10] = "world";
	char t[10] = "rl";
	cout << KMP(s, t);
	return 0;
} 
