// ѭ��Ƕ��6 ��ɽ�˺�
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int m;
	cin >> m;
	// ��ѭ����һ��3*n�� 
	for(int i = 0; i < 3 * m; i++){
		int count = i / 3 + 1;//Ҫ��ӡ���˵ĸ��� 
		// ��ӡ��ͷ
		if(i % 3 == 0){
			for(int j = 1; j <= 1+(m-count)*4; j++) cout << " ";
			cout << "O";
			for(int k = 1; k <= count - 1; k++){
				for(int a = 1; a <= 7; a++) cout << " ";
				cout << "O";
			}
			cout << endl;	
		} 
		// ��ӡ����
		if(i % 3 == 1){
			for(int j = 1; j <= (m-count)*4; j++) cout << " ";
			cout << '/';
			cout << '|';
			cout << "\\";
			for(int k = 1; k <= count - 1; k++){
				for(int a = 1; a <= 5; a++) cout << " ";
				cout << '/';
				cout << '|';
				cout << "\\";
			}
			cout << endl;
		} 
		// ��ӡ��
		if(i % 3 == 2){
			for(int j = 1; j <= (m-count)*4; j++) cout << " ";
			cout << '/';
			cout << " ";
			cout << '\\';
			for(int k = 1; k <= count - 1; k++){
				for(int a = 1; a <= 5; a++) cout << " ";
				cout << '/';
				cout << " ";
				cout << '\\';
			}
			cout << endl;
		} 
	}
		
	return 0;
} 
