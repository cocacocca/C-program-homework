#include<stdio.h>
int main(){
	int x,y,z,t;//t做为预备变量作为交换数值
    printf("请输入三个数字:\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y){
	t=x;//赋值运算从右到左，t得到x的值
    x=y;//x得到y的值
    y=t;//y得到x的值
    }
	if(x>z){
	t=x;
    x=z;
    z=x;
    }
    if(y>z){
    t=y;
    y=z;
    z=y;//下面同理逐一判断出各个数的大小
    }
	printf("从小到大的顺序为:%d %d %d",x,y,z);
    return 0;
}