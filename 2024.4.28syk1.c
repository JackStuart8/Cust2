#include "stdio.h"

int main() {
    int n;
    int a[4][4];
    int sum = 0;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter an array:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i!=j && j!=n-i-1&&j!=n-1)
            {sum = sum + a[i][j];}
        }
    }
    printf("sum=%d\n", sum);
    return 0;
}
/*#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    int a[n][n]; // 假设 C 编译器支持变长数组

    printf("Enter an array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // 排除主对角线、副对角线、最后一列和最后一行的元素
            if ((i != j) && (i + j != n - 1) && (j != n - 1) && (i != n - 1)) {
                sum += a[i][j];
            }
        }
    }

    printf("sum=%d\n", sum);

    return 0;
}
*/