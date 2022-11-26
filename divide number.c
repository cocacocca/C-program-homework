#include<stdio.h>
int main(){
int n,i;
printf("请输入一个整数：");
scanf("%d",&n);
printf("%d=",n);
for(i=2;i<=n;i++)//从2开始除，因为1不是质数
    {
        while(n%i==0)//如果能整除
            {
            printf("%d",i);//输出这个质数
            n=n/i;//把这个质数除掉
            if(n!=1)//如果n不等于1，说明还有质数
            printf("*");//输出乘号
            else
            break;//否则跳出循环
        }
    }
    printf("\n");
return 0;
}