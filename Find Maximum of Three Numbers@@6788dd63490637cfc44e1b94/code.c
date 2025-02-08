 #include <stdio.h>



int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b&&a>=c)
    {
        printf("a is greatest");
    }
    else if(b>=c && b>=c){
        printf("b is greater");
    }
    else{
        printf("the maximum number");
    }
    return 0;
}