// 函数3 函数一连串
#include <bits/stdc++.h>
using namespace std;
void F(int &x) {
    x ^= x & (x << 3);
    x ^= x & (x >> 2);
    x %= 65536;
}

void G(int &x) {
    x ^= x & (x << 2);
    x ^= x & (x >> 3);
    x %= 65536;
}
int main(void){
	char s[100005];
	cin >> s;
	int x;
	cin >> x;
	for(int i = 0; s[i]; i++){
		if(s[i] == 'F'){
			F(x);
		}
		else{
			G(x);
		}
	}
	cout << x << endl;
	return 0;
} 
