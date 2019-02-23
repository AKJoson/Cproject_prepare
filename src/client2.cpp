#include<stdio.h>
//the example is exchange a & b value.
int main(){
    int a,b;
    printf("please input a & b\n");
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a value is %d\n b value is %d\n",a,b);
}
