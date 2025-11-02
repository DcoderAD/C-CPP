#include<stdio.h>
void add()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum of %d and %d is %d",a,b,c);

}
int main()
{
    add();
    return 0;
}