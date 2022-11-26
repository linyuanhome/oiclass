#include <iostream>
#include <math.h>
using namespace std;

// 定义“画布”，2188=3⁷+1，即7阶“套娃型”的尺寸
bool output[2188][2188];
// 定义制造“套娃型”的递归函数
// 这里的xp、yp即为当前“套娃型”的坐标偏移量，size是阶数
void draw(int size, int xp, int yp) {
    if (size == 1) {      // 如果仅剩1阶，那么在“画布上”画一个X
        output[(int)pow(3, size - 1) / 2 + xp][(int)pow(3, size - 1) / 2 + yp] = true;
        return;           // 不用再递归了，返回
    }
    int off = (int)pow(3, size - 2);            // 当前阶数-1的尺寸
    draw(size - 1, xp, yp);                     // 左上
    draw(size - 1, off * 2 + xp, yp);           // 左下
    draw(size - 1, xp, off * 2 + yp);           // 右上
    draw(size - 1, off * 2 + xp, off * 2 + yp); // 右下
    draw(size - 1, off + xp, off + yp);         // 中间
    return;                                     // 好习惯
}

int main() {
    draw(7, 0, 0);        // 画一个7阶的“套娃型”方便后面输出
    int n; 
    cin >> n;
    while (n != -1) {
        // 直接输出
        for (int i = 0; i < pow(3, n - 1); i++) {
            for (int j = 0; j < pow(3, n - 1); j++) {
                cout << (output[i][j] ? 'X' : ' ');
            }
            cout << endl;
        }
        // 最后，别忘了输出一个单破折号
        cout << '-' << endl;
        cin >> n;
    }
    return 0;
}