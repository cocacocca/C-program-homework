#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(437);//防止因程序输出乱码使用程序设置控制台输出字符集为437
    char a = 219;//图形字符
    int x,y;
    printf("\1\1\n");
    for (x=1; x < 11; x++)//外层循环控制行数
    {
        for (y = 0; y < x ;y++)//内层循环控制列数
            printf("%c%c",a,a);
        printf("\n");
    }
    return 0;
}