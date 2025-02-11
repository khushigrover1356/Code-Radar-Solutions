# include<stdio.h>
int main(){
    int a,b,c;char ch;
    scanf("%d%d%c",&a,&b,&ch);
    if (ch == '+'){
        c = a+b;
        printf("%d",c);
    }
     else if (ch =='-'){
        c = a-b;
        printf("%d",c);
    }
     else if (ch == '*'){
        c = a*b;
        printf("%d",c);
    }
     else if (ch == '/'){
        if (b!=0){
            c = a/b;
            printf("%d",c);
        }
     }
    else{
        printf("error");
    }
    return 0;
}