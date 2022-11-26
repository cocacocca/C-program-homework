#include<stdio.h>
int main(){
    int s=0,a,n,t;
    printf("请输入正整数a和n:\n");
    scanf("%d %d", &a, &n);
    t=a;//t为a的值
    while (n>0)//循环n次
    {
        s=s+a;//s为a的累加和
        a=a*10+t;//a为a的累加和
        n--;//n减一
    }
    printf("a+aa+...=%d\n",s);
    return 0;
}