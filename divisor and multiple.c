#include<stdio.h>
int main(){
    int a,b,t,r,n;
    printf("请输入两个数字:\n");
    scanf("%d %d", &a, &b);
    if(a<b)
    {
        t=b;
        b=a;
        a=t;//交换a和b的值
    }
        r=a%b;//求余数
        n=a*b;//n为最小公倍数
    while (r!=0)//辗转相除法
    {
        a=b;
        b=r;//交换a和b的值
        r=a%b;//求余数
    }
    printf("这两个数的最大公约数是%d,最小公倍数是%d\n",b,n/b);	
    return 0;
}