// ѭ��Ƕ��7 ������
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	//��ÿһ��i�����жϣ��м�����������
	int count = 0;// �����м��������� 
	for(int i = 1; i <= n; i++){
		int temp_count = 0;
		for(int j = 1; j <= i; j++){
			if(i % j == 0) temp_count++;
			if(temp_count > 4) break;
		}
		if(temp_count <= 4) count++; 
	}
	cout << count;
	return 0;
} 
