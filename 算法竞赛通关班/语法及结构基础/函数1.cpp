// ����1 ������
#include <bits/stdc++.h>
using namespace std;

int check(int a, int b, int c, int checknum[]){
	// ��λ
	int x1 = a % 10; checknum[x1]++;
	int x2 = b % 10; checknum[x2]++;
	int x3 = c % 10; checknum[x3]++;
	// ʮλ
	int y1 = (a - (a / 100) * 100) / 10; checknum[y1]++;
	int y2 = (b - (b / 100) * 100) / 10; checknum[y2]++;
	int y3 = (c - (c / 100) * 100) / 10; checknum[y3]++;
	// ��λ 
	int z1 = a / 100; checknum[z1]++;
	int z2 = b / 100; checknum[z2]++;
	int z3 = c / 100; checknum[z3]++;

	int flag = 1;
	for(int i = 1; i < 10; i++){
		if(!checknum[i]) flag = 0;
	}
	return flag;
}

int main(void){
	for(int a = 100; a <= 333; a++){
		int check_num[10] = {0}; // ���ڼ�¼0-9���ֳ��ֵ������������Ϊ1 
		if(check(a, 2 * a, 3 * a, check_num)){
			cout << a << ' ' << 2 * a << ' ' << 3 * a << endl;
		}
	}
	
	return 0;
} 
