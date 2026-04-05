@@@@@@@@@@sum of first n natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("sum of first %d natural number is %d",n,sum);
    return 0;
}






@@@@@@@@@@sum of first n even natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i*2;
    printf("sum of first %d natural number is \n%d\n",n,sum);
    return 0;
}








sum of first odd n natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i*2-1;
    printf("sum of first %d natural number is \n%d\n",n,sum);
    return 0;
}


sum of square of n natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i*i;
    printf("sum of first %d natural number is %d",n,sum);
    return 0;
}


sum of cube of n naturak numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i*i*i;
    printf("sum of first %d natural number is %d",n,sum);
    return 0;
}
