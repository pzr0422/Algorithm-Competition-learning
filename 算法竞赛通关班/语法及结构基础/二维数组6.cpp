// 二维数组6 回型矩阵（注意和6-2的逻辑对比） 
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int tan[25][25] = {0}; // 0表示没走过，1表示走过 
	int dire = 0; // 表示当前走的方位:dire%4=0表示向右，%4=1表示向下，%4=2表示向左，%4=3表示向右
	int x = 1, y = 1;
	int n;
	cin >> n;
	for(int i = 1; i <= n * n; i++){
		int flag = 0;
		// 若当前位置没有被走过并且没有触碰到边界 
		if(!tan[x][y] && (x >= 1 && x <= n) && (y >= 1 && y <= n)){
			tan[x][y] = i;
		}
		// 若当前位置越界，则需要调整至正确的位置 
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
		// 更新位置
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
