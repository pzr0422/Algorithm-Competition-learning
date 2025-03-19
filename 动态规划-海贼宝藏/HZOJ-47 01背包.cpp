// HZOJ-47 01����
#include <bits/stdc++.h>
using namespace std;

const int N = 105;

int w[N], val[N];
int V, n; // ������������Ʒ�� 
int ans; // ����ֵ
 
// ״̬������ʣ�����, ��ǰ��ֵ��w��val���±� 
void dfs(int left_weight, int value, int pos){
	// �߽� 
	if(pos == n){
		ans = max(value, ans);
		return;
	}
	// ѡ��ѡ
	// ��ѡ����ǰʣ�����>��ǰ��Ʒ����
	if(left_weight >= w[pos]){
		dfs(left_weight - w[pos], value + val[pos], pos + 1);
	} 
	// ���߲�ѡ����ѡû���κ�������
	dfs(left_weight, value, pos + 1); 
}

int main(void){
	cin >> V >> n;
	for(int i = 0; i < n; i++){
		scanf("%d%d", &w[i], &val[i]);
	}
	dfs(V, 0, 0);
	cout << ans << endl;
	return 0;
}
