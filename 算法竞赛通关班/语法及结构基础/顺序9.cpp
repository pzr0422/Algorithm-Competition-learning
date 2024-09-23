//Ë³Ðò9 ÆÌµØ×©
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n, m, a;
	cin >> n >> m >> a;
	int count1, count2;
	if(n % a) count1 = n / a + 1;
	else count1 = n / a;
	if(m % a) count2 = (int)m / a + 1;
	else count2 = m / a;
	cout << count1 * count2;
	return 0;
} 
