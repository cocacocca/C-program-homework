#include<stdio.h>
int main()
{
    int i,j;
    int count=0;
    for(i=101;i<=200;i++)//循环100次
    {
        for(j=2;j<i;j++)//循环100次
        {
            if(i%j==0)//求余数，判断是否为偶数
            break;//是偶数则跳出循环
        }
        if(j>=i)//判断是否为素数
        {
            count++;//计数
            printf("%5d",i);//输出素数
        }
        if(count%5==0)//判断是否为5的倍数
        printf("\n");//是5的倍数则换行
    }
    return 0;
}