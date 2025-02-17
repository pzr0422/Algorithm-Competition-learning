// KMP算法示例
#include <bits/stdc++.h>
using namespace std;
int *getNext(const char *t){
	int tlen = strlen(t);
	int *next = (int *)malloc(sizeof(int) * tlen);
	next[0] = -1;
	int j = -1;
	for(int i = 1; i < tlen; i++){
		while(j != -1 && t[i] != t[j + 1]) j = next[j]; // uv字符不相等时
		if(t[i] == t[j + 1]) j += 1;
		next[i] = j;
	}
	return next;
}

int KMP(const char *s, const char *t){
	int *next = getNext(t); // 获取模式串的next数组 
	int j = -1;
	for(int i = 0; s[i]; i++){
		while(j != -1 && s[i] != t[j + 1]) j = next[j]; // 若当前字符不匹配，模式串根据next数组信息进行跳转
		if(s[i] == t[j + 1]) j += 1;
		if(t[j + 1] == 0) return i - strlen(t) + 1; // 匹配成功(已匹配到'\0'字符)
	}
	return -1; // 如果没有匹配成功，返回-1 
} 

int main(void){
	char s[10] = "world";
	char t[10] = "rl";
	cout << KMP(s, t);
	return 0;
} 
