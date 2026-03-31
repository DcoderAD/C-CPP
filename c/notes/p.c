// #include<stdio.h>
// void swap(int*,int*);
// int main()
// {
//     int a,b;
//     printf("Enter 2 numbers");
//     scanf("%d%d",&a,&b);
//     printf("a=%d  b=%d ",a,b);
//     swap(&a,&b);
//     printf("a=%d  b=%d ",a,b);

//     return 0;

// }

// void swap(int*p,int*q)
// {   int c;
//     c=*p;
//     *p=*q;
//     *q=c;
// }



#include<stdio.h>
int *f1()// we made this a pointer function because it needs to return address.
{
    int a;//lifetime of this a is up to this function only
    return &a;//returning a variables address.
}
void fun()
{
    int *p;
    p=f1();
    *p=5;//
}
int main()
{
    
    printf("%d",*f1());
    return 0;
}