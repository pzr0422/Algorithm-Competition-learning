//ѭ��4 ��ʦ�ķ��� 
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	double sum = n;
	int count;
	while(sum < 50.0){
		sum *= 1.1;
		count++;
	} 
	cout << count << endl;
	return 0;
} 
