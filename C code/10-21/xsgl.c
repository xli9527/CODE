#include <stdio.h>
int main()
{
    int a,h,i,j;
    char b,c,d,f,g;
    printf("新录入学生的学号为（自动按序号生成）：");
    scanf("%d",&a);
    printf("请输入学生姓名（2~3个中文）：") ;
    scanf("%s",&b);
    printf("请输入学生性别，M表示男生，F表示女生（M or F）：");
    scanf("%s",&c);
    printf("请输入学生出生年月日（格式如1000-01-01）：");
    scanf("%d",&d);
    printf("请输入籍贯（12个以内的中文文字）：");
    scanf("%s",&f);
    printf("请输入学生手机号码（15个以内的字符）：");
    scanf("%s",&g); 
    printf("请输入数学课成绩（0~100的整数）：");
    scanf("%d",&h);
    printf("请输入专业课成绩（0~100的整数）：");
    scanf("%d",&i);  
    printf("请输入英语课成绩（0~100的整数）：");
    scanf("%d",&j); 
    return 0;
}