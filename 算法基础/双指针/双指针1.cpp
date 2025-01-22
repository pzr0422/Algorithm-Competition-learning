// 双指针1
#include <bits/stdc++.h>
using namespace std;

int main(void){
	char str[1000];
	gets(str);
	int n = strlen(str);
	// 双指针做法
	for(int i = 0; str[i]; i++){
		int j = i;
		while(j < n && str[j] != ' ') j++; // 指针j找到空格
		for(int a = i; a < j; a++) cout << str[a];
		cout << endl;
		i = j;
	} 
	return 0;
} 
