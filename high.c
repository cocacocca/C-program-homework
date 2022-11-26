#include<stdio.h>
int main()
{
    float h,s;
    h=s=100;
    h=h/2;
    for(int i=2;i<=10;i++)//循环10次
    {
        s=s+2*h;//求总高度
        h=h/2;//求第n次落地时的高度
    }
    printf("第十次落地时经过%f米,第十次反弹高%f米\n",s,h);
    return 0;
}