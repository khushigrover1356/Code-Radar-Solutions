#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n]; int even,odd;
}
for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);

for(int i=1; i<n; i++){
    if(arr[i]%2 == 0){
        even += arr[i];
    }
    else {
        odd +=arr[i];
    }
    printf("%d",&even);
    printf("%d",&odd);
}
return 0;
}