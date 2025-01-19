// �߾���ģ��
// �����������������������ǵĺ�
// ͨ��ʹ��vector��������ʾ������ 
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

// ����һ��add����
vector<int> add(vector<int> &A, vector<int> &B){
	// ���������������ĺ�
	vector<int> S;
	int t = 0; // ����һ����λ 
	for(int i = 0; i < A.size() || i < B.size(); i++){
		if(i < A.size()) t += A[i];
		if(i < B.size()) t += B[i];
		S.push_back(t % 10);
		t /= 10;
	} 
	if(t == 1) S.push_back(1);
	return S;
}

// ����һ���ȽϷ���cmp���ڱȽ�A��B˭��(A >= B)(һ��Ҫ��֤AB�����������и���������Լ�ȥת���ɶ��������������)
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

// ����һ��sub����(Ĭ��A >= B)
vector<int> sub(vector<int> &A, vector<int> &B){ 
	// ����һ����λ 
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
		S.push_back((t + 10) % 10); // ͳһ���������д�� 
		if(t < 0) t = 1; // ��Ҫ��λ
		else t = 0; 
	}
	
	// ȥ��ǰ��0(���������λ��һ�� = A��λ����ȥ��ǰ������0)
	// ���磺123-120 �����������Ľ����003 ��Ҫ��ǰ��0ȥ�� 
	while(S.size() > 1 && S.back() == 0) S.pop_back(); 
	return S;
}

int main(void){
	string a, b;
	cin >> a >> b; 
	vector<int> A, B; // BigInt
	
	// ����a,b����vector����
	// ʹ��string���size()
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
