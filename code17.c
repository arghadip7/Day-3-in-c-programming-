//fibonacci number 
#include<stdio.h>
int main(){
    int a=0,b=1,n;
    printf("enter the no: ");
    scanf("%d",&n);
    int c;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
return 0;
}