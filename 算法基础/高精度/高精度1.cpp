// 高精度模板
// 输入两个大整数，计算它们的和
// 通常使用vector类型来表示大整数 
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

// 定义一个add方法
vector<int> add(vector<int> &A, vector<int> &B){
	// 计算两个大整数的和
	vector<int> S;
	int t = 0; // 定义一个进位 
	for(int i = 0; i < A.size() || i < B.size(); i++){
		if(i < A.size()) t += A[i];
		if(i < B.size()) t += B[i];
		S.push_back(t % 10);
		t /= 10;
	} 
	if(t == 1) S.push_back(1);
	return S;
}

// 定义一个比较方法cmp用于比较A、B谁大(A >= B)(一定要保证AB是正整数，有负数的情况自己去转换成都是正整数的情况)
bool cmp(vector<int> & A, vector<int> &B){
	/*
	if(A.size() > B.size()) return true;
	else if(A.size() == B.size()){
		for(int i = A.size() - 1; i >= 0; i--){
			if(A[i] > B[i]) return true;
			if(A[i] < B[i]) return false;
		}
	}
	else return false;
	*/
	if(A.size() != B.size()) return A.size() > B.size();
	else{
		for(int i = A.size() - 1; i >= 0; i--){
			if(A[i] != B[i]) return A[i] > B[i];
		}
	}
	return true;
} 

// 定义一个sub方法(默认A >= B)
vector<int> sub(vector<int> &A, vector<int> &B){ 
	// 定义一个借位 
	int t = 0;
	int sub;
	vector<int> S;
	/*
	for(int i = 0; i < A.size(); i++){
		if(i < B.size()){
			if(A[i] - B[i] - t < 0){
				sub = A[i] - B[i] - t + 10;
				t = 1;
			}
			else{
				sub = A[i] - B[i] - t;
				t = 0;
			}
		}
		else{
			sub = A[i] - t;
			t = 0;
		}
		S.push_back(sub);
	}
	*/
	for(int i = 0; i < A.size(); i++){
		t = A[i] - t;
		if(i < B.size()) t -= B[i];
		S.push_back((t + 10) % 10); // 统一两种情况的写法 
		if(t < 0) t = 1; // 需要借位
		else t = 0; 
	}
	
	// 去掉前置0(计算出来的位数一定 = A的位数，去掉前面多余的0)
	// 例如：123-120 不做这个步骤的结果是003 需要把前置0去掉 
	while(S.size() > 1 && S.back() == 0) S.pop_back(); 
	return S;
}

int main(void){
	string a, b;
	cin >> a >> b; 
	vector<int> A, B; // BigInt
	
	// 遍历a,b存入vector数组
	// 使用string类的size()
	for(int i = a.size() - 1; i >= 0; i--){
		A.push_back(a[i] - '0');
	}
	for(int i = b.size() - 1; i >= 0; i--){
		B.push_back(b[i] - '0');
	}
	
	// A > B
	if(cmp(A, B)){
		auto ans = sub(A, B);
		for(int i = ans.size() - 1; i >= 0; i--){
			printf("%d", ans[i]);
		}	
	}
	// A < B
	else{
		auto ans = sub(B, A);
		printf("-");
		for(int i = ans.size() - 1; i >= 0; i--){
			printf("%d", ans[i]);
		}
	}
	return 0;
} 
