#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(){
    SetConsoleOutputCP(437);//防止因程序输出乱码使用程序设置控制台输出字符集为437，依赖windows库
    int x,y;
    for(x=1;x<=8;x++)/*外层循环控制行数*/{
        for(y=1;y<=8;y++)/*内层循环控制列数*/{
            if((x+y)%2==0)//判断行数与列数之和的奇偶性
                printf("%c%c",219,219);//输出两个图形字符
            else
                printf(" ");
        }
        printf("\n");
    }
    system("pause");//防止程序运行完毕后窗口自动关闭，依赖stdlib库
    return 0;
}