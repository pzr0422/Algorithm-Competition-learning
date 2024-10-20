// 字符串6 最长最短单词
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char s[10100];
	cin.getline(s, 10100);
	int len = strlen(s);
	int cnt = 0, max_cnt = 0, min_cnt = INT_MAX, max_index, min_index;
	char min_word[105];
	char max_word[105];
	for(int i = 0; i < len; i++){
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
			cnt++;
		}
		else{
			if(cnt > 0) { // 只在遇到字母后更新
                if(cnt < min_cnt) {
                    min_cnt = cnt;
                    min_index = i - cnt;
                }
                if(cnt > max_cnt) {
                    max_cnt = cnt;
                    max_index = i - cnt;
                }
                cnt = 0;
        	}
		}
	}
	int index = 0;
	for(int i = 0; i < min_cnt; i++) {
        min_word[i] = s[min_index + i];
    }
    min_word[min_cnt] = '\0';
	index = 0;
	for(int i = max_index; i < max_index + max_cnt; i++){
		max_word[index] = s[i];
		index++;
	}
	min_word[min_cnt] = '\0';
	max_word[max_cnt] = '\0';
	cout << max_word << endl;
	cout << min_word << endl;
	return 0;
} 
