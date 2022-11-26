#include<stdio.h>
int main()
{
int a,b,c,d;
printf("\n");
    for(a=1;a<5;a++)//a表示第一个数
    {
        for(b=1;b<5;b++)//b表示第二个数
        {
            for(c=1;c<5;c++)//c表示第三个数
            {
                
                if(a!=b&&a!=c&&b!=c)//判断三个数是否相等
                {
                    printf("%d%d%d\n",a,b,c);
                }
            }
        }
    }
}