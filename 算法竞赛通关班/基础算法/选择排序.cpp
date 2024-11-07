// ≈≈–Ú2 —°‘Ò≈≈–Ú
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int a[1005];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[i]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
	return 0;
}
 
