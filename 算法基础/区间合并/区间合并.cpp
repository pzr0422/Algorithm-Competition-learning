// 区间合并
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
vector<PII> segs;

void merge(vector<PII> &segs){
	int st = -2e9, ed = -2e9;
	vector<PII> res;
	sort(segs.begin(), segs.end());
	
	// 遍历区间
	for(auto seg : segs){
		// 两个区间没有交集 
		if(ed < seg.first){
			if(st != -2e9) res.push_back({st, ed});
			st = seg.first;
			ed = seg.second;
		}
		// 有交集 
		else ed = max(ed, seg.second);
	} 
	// 处理最后一个未加入的区间 
	if(st != -2e9) res.push_back({st, ed});
	segs = res;
}

int main(void){
	int n;
	cin >> n;
	int l, r;
	for(int i = 0; i < n; i++){
		cin >> l >> r;
		segs.push_back({l, r});
	}
	merge(segs);
	cout << segs.size() << endl;
	
	return 0;
} 
