#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);

    }
    int max= -100000000;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0 && arr[i]>max){
        max=arr[i];
        }
    }
    if (max!=-100000000){
        printf("%d",max);
    }
    else{
        printf("-1");
    }
     
}