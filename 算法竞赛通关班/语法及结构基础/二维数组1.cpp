// ��ά����1 �������� 
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int arr[5][5];
	int row, col;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> arr[i][j];
			if(arr[i][j] == 1){
				row = i;
				col = j;
			}
		}
	}
	cout << abs(row - 2) + abs(col - 2) << endl;
	return 0;
} 
