
#include<stdio.h>
int main()
{
float a;
float b;
char ch;
scanf("%f %c %f",&a,&ch,&b);
switch (ch)
{
case'+':
{
printf("ADDITION:%f",a+b);
break;
}
case'-':
{
printf("SUBSTRACTION:%f",a-b);
break;
}
case'*':
{
printf("MULTIPLICATION:%f",a*b);
break;
}
case'/':
{
printf("DIVISION:%f",a/b);
break;
}
default:
{
printf("INVALID VALUE");
}
}
return 0;
}
