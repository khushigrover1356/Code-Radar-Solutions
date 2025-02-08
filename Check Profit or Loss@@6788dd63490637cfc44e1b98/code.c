#include <stdio.h>



int main() {
    int cost price,selling price;
    scanf("%d%d",&cost price,&selling price);
    if (cost price>selling price){
        printf("Profit\n");
    }
    else if("selling price>cost price"){
        printf("Loss\n");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}