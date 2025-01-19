// �߾���2 �˷��ͳ���
#include <bits/stdc++.h>
using namespace std;

// ����߾��ȳ˷�mul��������*С������ 
vector<int> mul(vector<int> &A, int multi){
	int t = 0;// ����һ����λ
	vector<int> S;
	/*
	����д��
	for(int i = 0; i < A.size(); i++){
		S.push_back((A[i] * multi + t) % 10);
		t = (A[i] * multi + t) / 10;
	} 
	if(t) S.push_back(t); 
	*/
	for(int i = 0; i < A.size() || t; i++){
		if(i < A.size()) t += A[i] * multi;
		S.push_back(t % 10);
		t /= 10;
	}
	return S; 
} 

// ����߾��ȳ���div�������� / С������
vector<int> div(vector<int> &A, int divide){
	vector<int> S;
	int t = 0;
	for(int i = A.size() - 1; i >= 0; i--){
		t = t * 10 + A[i];
		S.push_back(t / divide);
		t = t % divide;
	}
	reverse(S.begin(), S.end());
	if(S.size() > 1 && S.back() == 0) S.pop_back();
	return S;
} 

int main(void){
	string a, b;
	int multi = 12;
	int divide = 12;
	cin >> a >> b;
	vector<int> A, B;
	
	// ���������
	for(int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
	for(int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
	
	vector<int> ans1 = mul(A, multi);
	vector<int> ans2 = div(A, divide);
	for(int i = ans1.size() - 1; i >= 0; i--){
		printf("%d", ans1[i]);
	}
	printf("\n");
	for(int i = ans2.size() - 1; i >= 0; i--){
		printf("%d", ans2[i]);
	}
	return 0;
} 
