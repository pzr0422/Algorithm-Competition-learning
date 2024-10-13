// 二维数组8 螺旋矩阵
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tan[2005][2005] = {0}; // 0表示没走过，记录矩阵
    int dire = 0; // 表示当前走的方向: 0右, 1下, 2左, 3上
    int x = 1, y = 1;
    int n;
    int pos_x, pos_y; 
    cin >> n >> pos_x >> pos_y;

    for (int i = 1; i <= n * n; i++) {
        tan[x][y] = i;  // 填入当前数字

        // 更新方向
        switch (dire % 4) {
            case 0: y++; break; // 右
            case 1: x++; break; // 下
            case 2: y--; break; // 左
            case 3: x--; break; // 上
        }

        // 如果越界或当前位置已经被填过，则回退并转向
        if (x < 1 || x > n || y < 1 || y > n || tan[x][y] != 0) {
            // 回退
            switch (dire % 4) {
                case 0: y--; break; // 回退右
                case 1: x--; break; // 回退下
                case 2: y++; break; // 回退左
                case 3: x++; break; // 回退上
            }

            // 改变方向
            dire++;

            // 根据新方向移动
            switch (dire % 4) {
                case 0: y++; break; // 右
                case 1: x++; break; // 下
                case 2: y--; break; // 左
                case 3: x--; break; // 上
            }
        }
    }

    // 输出i行j列的数
	cout << tan[pos_x][pos_y] << endl; 
    return 0;
}
 
