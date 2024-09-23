// 一维数组2 白细胞计数
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	vector<double> v;
	double temp;
	for(int i = 0; i < n; i++){
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	v.erase(v.begin());
	v.erase(v.end() - 1);
	double sum = 0;
	double max = 0;
	for(int i = 0; i < v.size(); i++){
		sum += v[i];
	}
	double avg = sum / v.size();
	for(int i = 0; i < v.size(); i++){
		double rest = abs(v[i] - avg);
		if(rest > max) max = rest;
	}
	printf("%.2lf %.2lf", avg, max);
	return 0;
} 
