#include <stdio.h>

int main() {
    int  n;
    int i, j;
    int rmax, cmin, s;
    int a[6][6], row[6], col[6];

    printf("Enter n: ");
    scanf("%d" , &n);

    printf("Enter an array\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        rmax = a[i][0];
        for(j = 1; j < n; j++) {
            if(a[i][j] > rmax) {
                rmax = a[i][j];
            }
        }
        row[i] = rmax;
    }

    for(j = 0; j < n; j++) {
        cmin = a[0][j];
        for(i = 1; i < n; i++) {
            if(a[i][j] < cmin) {
                cmin = a[i][j];
            }
        }
        col[j] = cmin;
    }
    s = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] == row[i] && a[i][j] == col[j]) {
                printf("a[%d][%d]=%d\n", i, j, a[i][j]);
                s = 1;
            }
        }
    }
    if(s == 0) {
        printf("NONE\n");
    }

    return 0;
}
