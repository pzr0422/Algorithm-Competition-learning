// ��ά����6 ���;���ע���6-2���߼��Աȣ� 
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int tan[25][25] = {0}; // 0��ʾû�߹���1��ʾ�߹� 
	int dire = 0; // ��ʾ��ǰ�ߵķ�λ:dire%4=0��ʾ���ң�%4=1��ʾ���£�%4=2��ʾ����%4=3��ʾ����
	int x = 1, y = 1;
	int n;
	cin >> n;
	for(int i = 1; i <= n * n; i++){
		int flag = 0;
		// ����ǰλ��û�б��߹�����û�д������߽� 
		if(!tan[x][y] && (x >= 1 && x <= n) && (y >= 1 && y <= n)){
			tan[x][y] = i;
		}
		// ����ǰλ��Խ�磬����Ҫ��������ȷ��λ�� 
		else{
			flag = 1;
			switch(dire % 4){
				case 0:{
					y--;
					x++;
					dire++;
					i--;
					break;
				}
				case 1:{
					x--;
					y--;
					dire++;
					i--;
					break;
				}
				case 2:{
					y++;
					x--;
					dire++;
					i--;
					break;
				}
				case 3:{
					x++;
					y++;
					i--;
					dire++;
					break;
				}
			}
		}
		// ����λ��
		if(!flag){
			switch(dire % 4){
			case 0:{
				y++;
				break;
			}
			case 1:{
				x++;
				break;
			}
			case 2:{
				y--;
				break;
			}
			case 3:{
				x--;
				break;
			}	
			} 
		}
	} 
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << tan[i][j] << ' ';
		} 
		cout << endl;
	}
	return 0;
} 
