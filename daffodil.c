/*#include <stdio.h>
int main()
{
    int x, a, b, c;
    printf("请输入一个三位数整数：");
    scanf("%d", &x);
    a = x / 100;
    b = x / 10 % 10;
    c = x % 10;
    if (x == a * a + b * b + c * c)
        printf("%d是一个水仙花数\n", x);
    else
        printf("%d不是一个水仙花数\n", x);
    return 0;
}

#include <stdio.h>
int main()
{
    int m=100,a,b,c;
    while(m<1000){
        a=m/100;
        b=m/10%10;
        c=m%10;
        if(m==a*a*a+b*b*b+c*c*c)
            printf("%d\n",m);
        m++;
    }
}*/
#include<stdio.h>
int main(){
    int i,x,y,z;
    for(i=100;i<=1000;i++)
    {
        x=i%10;//个位
        y=i/10%10;//十位
        z=i/100%10;//百位
        if(i==x*x*x+y*y*y+z*z*z)
            printf("%d\n",i);
    }
    return 0;
}
