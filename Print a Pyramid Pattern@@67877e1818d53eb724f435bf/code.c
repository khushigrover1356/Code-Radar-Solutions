#include<stdio.h>
int n;
scanf("%d",&n);
for(int i=0;i<=n;i++){
    for(int s=0;s<n-1;s++){
        printf(" ");
    }
    for(int j=i;j>=1;j--){
        printf("*");
    }
    for(int j=2;j<=i;j++){
        printf("*");
    }
    printf("\n");
}