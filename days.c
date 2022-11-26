#include<stdio.h>
int main(){
    int day,month,year,leap,sum;
    printf("Please input the year, the month, the day:");
    scanf("%d%d%d",&year,&month,&day);
    switch(month){
        case 1:sum=0;break;
        case 2:sum=31;break;
        case 3:sum=59;break;
        case 4:sum=90;break;
        case 5:sum=120;break;
        case 6:sum=151;break;
        case 7:sum=181;break;
        case 8:sum=212;break;
        case 9:sum=243;break;
        case 10:sum=273;break;
        case 11:sum=304;break;
        case 12:sum=334;break;/*判断选取第一月到第十二月的条件,选取输入值前几个月的总天数*/
        default:printf("data error");
    }
    sum = sum + day;//加上输入的天数
    if (year%400==0||(year%4==0&&year%100!=0))/*判断是否为闰年*/{
        leap = 1;//一眼丁真鉴定为真
        }
        else{
        leap = 0;
    }
    if(leap==1&&month>2)/*上面语句粗略判断年份，该语句会在输入值月份大于2时在天数+1*/{
        sum++;//闰年数天数加一
    }
    printf("It is the %dth day of %d.",sum,year);
    printf("\n");
}