// �����������
#include <bits/stdc++.h>

int main(void){
	printf("26\n");
	srand(time(0)); 
	for(int i = 0; i < 26; i++){
		printf("%c %d\n", 'a' + i, rand()%100000);//��ӡ�ַ��Լ�Ƶ�� 
	}
	return 0;
} 
