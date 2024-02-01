#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter your first number:");
    scanf("%d",&a);

    printf("Enter your Second number:");
    scanf("%d",&b);
    
    int sum=a+b;
    printf("Sum:%d\n",sum);

    int sub=a-b;
    printf("Sub:%d\n",sub);

    int mul=a-b;
    printf("mul:%d\n",mul);

    int div=a/b;
    printf("Div:%d\n",div);

    int mod=a%b;
    printf("Mod:%d\n",mod);
    return 0;
}