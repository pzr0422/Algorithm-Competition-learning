// ��ϡ�衱����� 
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

const int N = 3e6 + 10;
int a[N];
int S[N]; // ǰ׺������ 
int n, m;
vector<int> alls;
vector<PII> add, query;

// ģ��find --> ���±꣨ӳ����̣�add����Ҫ�ӵ�ֵ-->alls���±� + 1�� 
int find(int x){
	int l = 0, r = alls.size() - 1;
	while(l < r){
		int mid = (l + r) >> 1;
		if(alls[mid] >= x) r = mid;
		else l = mid + 1;
	}
	return r + 1; // ��ΪҪ��ǰ׺�ͣ�����ӳ�䵽1,2,...,n 
} 

int main(void){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		int x, c;
		cin >> x >> c;
		add.push_back({x, c});
		alls.push_back(x);
	}	
	
	for(int i = 0; i < m; i++){
		int l, r;
		cin >> l >> r;
		query.push_back({l, r});
		alls.push_back(l);
		alls.push_back(r);
	}
	
	// ����+ȥ��
	sort(alls.begin(), alls.end());
	alls.erase(unique(alls.begin(), alls.end()), alls.end());
	
	// ӳ�䵽a[N]
	for(auto item : add){
		int x = find(item.first); // Ҫ�ӵ������±꣨��Χ��ʵ�ʷ�Χ��ӳ���alls�±꣨��ΧС������������ + 1 
		a[x] += item.second;
	} 
	
	// ����ǰ׺������
	for(int i = 1; i <= alls.size(); i++){
		S[i] = a[i] + S[i - 1];
	} 
	
	// ����ѯ��(��Ҫӳ��)
	for(auto item : query){
		int l = item.first, r = item.second;
		int l1 = find(l), r1 = find(r);
		cout << S[r1] - S[l1 - 1] << endl;
	}
	return 0;
}
