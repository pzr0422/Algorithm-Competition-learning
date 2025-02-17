# 数据结构1

## 1. 重新认识链表的表示方式

### 1.1 单链表

==舍弃结构体表示节点的方法==

使用两个数组e[N]（存储==节点的值==）和ne[N]（存储==下一个节点的下标==）

==空节点下标用-1表示==

例：

![image-20250122155527985](C:\Users\潘zr\AppData\Roaming\Typora\typora-user-images\image-20250122155527985.png)

实现模板：

```c
// 单链表
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

// head->头指针
// idx->当前使用下标
// e[N]->存储节点值
// ne[N]->当前节点下一个节点的下标 
int e[N], ne[N], idx, head;

// 初始化
void init(){
	head = -1; // 把head初始化空节点 
	idx = 0;
} 

// 从头节点处插入x
void insert_to_head(int x){
	e[idx] = x;
	ne[idx] = head;
	head = idx;
	idx++;
} 

// 插入到下标为k的节点后面
void add(int k, int x){
	e[idx] = x;
	ne[idx] = ne[k];
	ne[k] = idx;
	idx++;
} 

// 将下标为k的节点的后一个节点删除
void add(int k){
	ne[k] = ne[ne[k]];
} 


int main(void){
	//...
	return 0;
} 
```

#### 例题：单链表

![image-20250122170200992](C:\Users\潘zr\AppData\Roaming\Typora\typora-user-images\image-20250122170200992.png)

### 1.2 双链表

```c
// 双链表示例 采用左指针数组l和右指针数组r来模拟逻辑
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

// 分别是当前节点值，当前节点左边的下标，当前节点右边的下标，当前正在使用的下标 
int e[N], l[N], r[N], idx;

// 初始化(0表示头节点，1表示尾结点)
void init(){
	r[0] = 1, l[1] = 0;
	idx = 2;
} 

// 插入操作(注意操作顺序：先改右边的点)
void insert(int k, int x){
	e[idx] = x;
	r[idx] = r[k];
	l[idx] = k;
	// k右边的节点 
	l[r[k]] = idx;
	// k 
	r[k] = idx;
	
} 

// 删除操作
void delete(int k){
	l[r[k]] = l[k];
	r[l[k]] = r[k];
} 
int main(void){
	
	return 0;
} 
 
```

## 2. 栈和队列（用数组模拟）

## 3. 单调栈和单调队列

### 3.1 单调栈

应用场景：给定一序列，输出每个数左边离它最近的比它小的数

```c
// 单调栈例题
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int stk[N], tt; // 栈数组和栈顶 下标从1开始 
int n; 

int main(void){
    ios:sync_with_stdio(false);
	cin >> n;
	int x;
	for(int i = 0; i < n; i++){
		cin >> x;
		while(tt && stk[tt] >= x) tt--; // 维护单调栈：如果栈顶元素大于当前数，则此时的栈顶元素不可能成为答案
		// 跳出循环后，此时的栈顶元素就是答案
		if(tt) cout << stk[tt] << ' ';
		else cout << - 1 << ' ';
		stk[++tt] = x;
	}
	return 0;
} 
```

### 3.2 单调队列（滑动窗口）

```c
// 单调队列例题--滑动窗口
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int a[N], q[N]; // 题目给的序列 单调队列
int n, k; // 窗口大小为k 
int main(void){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int hh = 0, tt = -1; // 初始队列为空
	for(int i = 0; i < n; i++){
		// 判断队列头是否滑出窗口
		while(hh <= tt && i - k + 1 > q[hh]) hh++; 
		while(hh <= tt && a[q[tt]] > a[i]) tt--;
		q[++tt] = i; // 队列的值是下标
		if(i >= k - 1) printf("%d", a[q[hh]]);
	}
	return 0;
} 
```

## 4. KMP字符串

思路见海贼宝藏“数据结构与算法高级版”字符串匹配

```c
// KMP算法示例
#include <bits/stdc++.h>
using namespace std;
int *getNext(const char *t){
	int tlen = strlen(t);
	int *next = (int *)malloc(sizeof(int) * tlen);
	next[0] = -1;
	int j = -1;
	for(int i = 1; i < tlen; i++){
		while(j != -1 && t[i] != t[j + 1]) j = next[j]; // uv字符不相等时
		if(t[i] == t[j + 1]) j += 1;
		next[i] = j;
	}
	return next;
}

int KMP(const char *s, const char *t){
	int *next = getNext(t); // 获取模式串的next数组 
	int j = -1;
	for(int i = 0; s[i]; i++){
		while(j != -1 && s[i] != t[j + 1]) j = next[j]; // 若当前字符不匹配，模式串根据next数组信息进行跳转
		if(s[i] == t[j + 1]) j += 1;
		if(t[j + 1] == 0) return i - strlen(t) + 1; // 匹配成功(已匹配到'\0'字符)
	}
	return -1; // 如果没有匹配成功，返回-1 
} 

int main(void){
	char s[10] = "world";
	char t[10] = "rl";
	cout << KMP(s, t); // 结果为2
	return 0;
} 
```



























