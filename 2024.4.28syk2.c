#include "stdio.h"
int main(){
    int n;
    int a[10][10];
    int k=0;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter an array:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <n ; ++i) {
        for (int j = 0; j <i ; ++j) {
            if(a[i][j]!=0){
                printf("NO\n");
                k++;
                break;
            }
        }
    }
    if(k==0){
        printf("YES\n");
    }
    return 0;
}