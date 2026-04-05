#include<stdio.h>
int main()
{
    int i;
    printf("Enter a three digit num");
    scanf("%d",&i);
    if (i>99&&i<1000 || i>-1000&&i<-99)
        printf("%d is a three digit number",i);
    else
        printf("wrong %d is not a 3 digit number",i);
    return 0;
    
}






// {
//         int a,b;
//         printf("Enter two num");
//         scanf("%d%d",&a,&b);
//         if (a>b)
//             printf("%d is greater",a);
//         else
//             printf("%d is greater",b);
//         return 0;
// }




// {
//     int a,b,c,d;
//     printf("Enter a,b,c in a quadratic equation");
//     scanf("%d%d%d",&a,&b,&c);
//     d=b*b-4*a*c;
//     if (d>0)
//         printf("real and distinct");
//     if (d==0)
//         printf("real and equal");
//     if (d<0)
//         printf("imaginary roots");
//     return 0;
     
    
// }





// {  
//     int y;
//     printf("Enter any year");
//     scanf("%d",&y);
//     if(y%100)
//         if (y%4)
//             printf("%d is not a leap year",y);
          
//         else
//             printf("%d is a leap year",y);
//     else  
//         if (y%400)
//             printf("%d is not a leap year",y);
//         else
//             printf("%d is a leap year",y);
//     return 0;
        

// }
        




// {
//     int a,b,c;
//     printf("Enter three numbers");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b&&a>c)
//         printf("%d is greatest",a);
//     else if (b>c)
//         printf("%d is greates",b);
//     else
//         printf("%d is greatest",c);
    
//         return 0;
// }




{

    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d is greatest",a>b? a>c?a:c : b>c?b:c);
    return 0;
}