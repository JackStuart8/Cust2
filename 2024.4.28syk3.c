/*#include "stdio.h"
int main()
{
    int n;
    int a[10][10];
    printf("Enter n:");
    scanf("%d",&n);
    a[0][0]=1;
    a[1][0]=1;
    a[1][1]=1;
    for (int i = 2; i < n; i++) {
        a[i][0]=1;
        for (int j = 1; j < i; j++) {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
        a[i][i]=1;
    }
    for (int i = 0; i <n ; ++i) {
        for (int k = 0; k < n-i-1; ++k) {
            printf(" ");
        }
        for (int j = 0; j <=i ; ++j) {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
        }
    return 0;
    
}*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter N (1<=N<=10): ");
    scanf("%d", &n);

    // 杨辉三角的数组
    int triangle[10][10] = {0};

    // 初始化杨辉三角的第一行
    triangle[0][0] = 1;

    // 构建杨辉三角
    for (int i = 1; i < n; i++) {
        triangle[i][0] = 1;  // 每一行的开始都是1
        for (int j = 1; j <= i; j++) {
            // 上一行的相邻两数之和
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    // 打印杨辉三角
    for (int i = 0; i < n; i++) {
        // 为了形成正三角形格式，每行开头打印一些空格
        for (int k = 0; k < (n - i - 1) * 4; k++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            // 每个数字占固定4位
            printf("%4d", triangle[i][j]);
        }
        printf("\n");  // 每打印完一行换到下一行
    }

    return 0;
}
