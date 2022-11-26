#include<stdio.h>
int main(){
 int x,y,z;
 	printf("\n");
	for(x=1;x<10;x++)//外层循环控制行数
    {
        for(y=1;y<10;y++)//内层循环控制列数
        {
            z=x*y;
            printf("%d*%d=%d\t",x,y,z);//\t为制表符，使输出的数值对齐
        }
	printf("\n");
    }
}