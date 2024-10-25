// ×Ö·û´®14 Ë®ÏÂÌ½²âÆ÷
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int h, s;
	char order[105];
	cin >> h >> s >> order;
	for(int i = 0; order[i]; i++){
		if(order[i] == 'u'){
			if(s == 0) continue;
			else s--;
		}
		else{
			if(s == h) continue;
			else s++;
		}
	}
	cout << s << endl;
	return 0;
} 
