// ��ά����2 ��ѧ��(����������ηֿ�����)
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n, m;
	char score[101][101];
	cin >> n >> m;
	// ����ɼ� 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> score[i][j];
		}
	}
	int cnt = 0;
	int code;
	int stu[101] = {0}; 
	// ��ȡÿһ�࿼�� 
	for(int i = 0; i < m; i++){
		// �ٱȽ�ÿ��ѧ���ĳɼ�
		int max_score = score[0][i] - '0';
		for(int j = 1; j < n; j++){
			if(score[j][i] - '0' >= max_score){
				max_score = score[j][i] - '0';
			}
		}
		for(int j = 0; j < n; j++){
			if(score[j][i] - '0' == max_score){
				stu[j] = 1;
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(stu[i] == 1){
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
} 
