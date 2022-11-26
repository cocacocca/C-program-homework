#include<stdio.h>
int main(){
    int f1=1,f2=1,i;
    for(i=1;i<=20;i++)//循环20次
    {
        printf("%12d%12d",f1,f2);//输出两个数值
        if(i%2==0)//求余数，判断是否为偶数
        printf("\n");//是偶数则换行
        f1=f1+f2;//前两个数值相加
        f2=f1+f2;//后两个数值相加
    }
    return 0;
}