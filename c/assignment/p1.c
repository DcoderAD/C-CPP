#include <stdio.h>
void f1()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("even");
    else
        printf("odd");
}
void f2()
{
    int i, f = 1, n;
    printf("Enter the number to get factorial value");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        f = f * i;
    printf("%d", f);
}
void f3()
{
    int a,b,c;
    printf("Enter 2 valuees in a & b : ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d\nb=%d",a,b);
}
int f4(int a,int b)
{
    int l;
    for(l=a>b?a:b;l<=a*b;l++)
        if (l%a==0&&l%b==0)
          return l;
}
int f5(int x)
{
    int i;
    for(i=2;i<x;i++)
        if(x%i==0)
            return 0;
    return 1;
    
}


int main()
{
    printf("%d",f5(5);
    
    return 0;
}