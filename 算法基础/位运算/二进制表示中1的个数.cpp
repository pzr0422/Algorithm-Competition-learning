// �����Ʊ�ʾ��1�ĸ���
#include <bits/stdc++.h>
using namespace std;

int lowbit(int n){
	return n & (-n);
} 


int main(void){
	int n;
	cin >> n;
	int count = 0;
	while(n){
		n -= lowbit(n); 
		count++;
	}
	cout << count << ' '; 
	return 0;
} 
