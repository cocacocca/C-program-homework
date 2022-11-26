#include <stdio.h>
int main()
{
    char c;
    int letters = 0, space = 0, digit = 0, other = 0;
    printf("请输入一行字符：");
    while ((c = getchar()) != '\n')
    {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')//判断是否为字母
            letters++;
        else if (c == ' ')//判断是否为空格
            space++;
        else if (c >= '0' && c <= '9')//判断是否为数字
            digit++;
        else//其他字符
            other++;
    }
    printf("字母=%d,空格=%d,数字=%d,其他=%d", letters, space, digit, other);
    return 0;
}