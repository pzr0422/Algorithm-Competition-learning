// ѭ��Ƕ��9 ѭ��-�ֽ�����ʽ
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	cout << n << '=';
	int i = 1;
	int flag = 1;
	while(n != 1){
		int count = 0;//�жϵ�ǰ�����Ĵη�Ϊ����
		i++;
		if(n % i == 0){
			count++;
			n /= i;
			while(n % i == 0){
				count++;
				n /= i;
			}
		} 
		else{
			continue;
		}
		if(flag == 0) cout << '*';
		if(count == 1){
			cout << i;
		}
		else{
			cout << i << '^' << count;
		}
		flag = 0;
		
	}
	return 0;
} 
