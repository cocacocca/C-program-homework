#include<stdio.h>
int main(){
    int score;
    char grade;
    printf("请输入成绩：");
    scanf("%d",&score);
    grade = (score >= 90) ? 'A' : ((score >= 60) ? 'B' : 'C'); /*三目运算符的嵌套，如果score大于等于90就将A的值赋给grade ,若score 
    小于90且大于等于60就将B的值赋给grade ,若score 小于90又小于60就将C的值赋给grade*/
    printf("%c",grade);
    return 0;
}