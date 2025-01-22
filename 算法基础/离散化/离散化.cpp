// “稀疏”的情况 
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

const int N = 3e6 + 10;
int a[N];
int S[N]; // 前缀和数组 
int n, m;
vector<int> alls;
vector<PII> add, query;

// 模板find --> 找下标（映射过程：add里面要加的值-->alls的下标 + 1） 
int find(int x){
	int l = 0, r = alls.size() - 1;
	while(l < r){
		int mid = (l + r) >> 1;
		if(alls[mid] >= x) r = mid;
		else l = mid + 1;
	}
	return r + 1; // 因为要做前缀和，所以映射到1,2,...,n 
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
	
	// 排序+去重
	sort(alls.begin(), alls.end());
	alls.erase(unique(alls.begin(), alls.end()), alls.end());
	
	// 映射到a[N]
	for(auto item : add){
		int x = find(item.first); // 要加的数的下标（范围大，实际范围）映射成alls下标（范围小，操作个数） + 1 
		a[x] += item.second;
	} 
	
	// 处理前缀和数组
	for(int i = 1; i <= alls.size(); i++){
		S[i] = a[i] + S[i - 1];
	} 
	
	// 处理询问(需要映射)
	for(auto item : query){
		int l = item.first, r = item.second;
		int l1 = find(l), r1 = find(r);
		cout << S[r1] - S[l1 - 1] << endl;
	}
	return 0;
}
