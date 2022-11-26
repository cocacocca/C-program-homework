#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(){
    SetConsoleOutputCP(437);//防止因程序输出乱码使用程序设置控制台输出字符集为437
    char a=176,b=219;//两个图形字符
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%C\n",a,a,b,a,a);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",b,a,a,a,b);
}