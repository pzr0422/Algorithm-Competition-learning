// һά����12 �ƽ̨
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	int a[1001];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int count = 1; // ��ǰƽ̨����
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(i == 0 || a[i] != a[i - 1]) count = 1;
		else{
			count++;
		}
		ans = max(ans, count);
	} 
	cout << ans << endl;
	return 0;
} 
