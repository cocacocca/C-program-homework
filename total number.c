#include <stdio.h>
#define N 1000
/*int main()
{
    int i,j,k;
    for (i=2;i<=1000;i++)
    {
        k=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            k+=j;
        }
        if (k==i)
            printf("%d\n", i);
    }
    return 0;
}*/

int main()
{
    int i, j, k, n, sum;
    int a[256]; //定义一个数组，将因子存入数组中
    for(i = 2; i <= N; i++)//从2开始循环
    {
        k=0;
        n=-1;
        sum=0;//将sum置0
        for(j=1;j<i;j++) //从1开始循环
        {
            if (i%j==0) //判断是否为因子
            {
                k++;
                a[k]=j; //将因子存入数组中
            }
        }
        for(n=1;n<=k;n++) //从1开始循环
        {
            sum += a[n]; //将数组中的因子相加
        }
        if(sum == i) //判断是否为完数
        {
            printf("%d its factors are ",i); //输出完数
            for (n=1;n<=k;n++)//从1开始循环
            {
                printf("%d ",a[n]); //输出因子
            }
            printf("\n");
        }
    }
    return 0;
}//两种做法，一种是直接判断，一种是先将因子存入数组中，再相加