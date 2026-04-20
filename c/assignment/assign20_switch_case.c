// student grade using switch case

// #include<stdio.h>
// int main()
// {   int marks=0;
//     printf("check your result:Enter your marks");
//     scanf("%d",&marks);
//     switch (marks)
//     {
//     case  90 ... 100:
//         printf("Grade A");
//         break;
//     case  80 ... 89:
//         printf("Grade B");
//         break;
//     case  70 ... 79:
//         printf("Grade C");
//         break;
//     case  60 ... 69:
//         printf("Grade D");
//         break;
//     case  50 ... 59:
//         printf("Grade E");
//         break;
//     case  0 ... 49:
//         printf("Grade F");
//         break;
//     default:
//         printf("invalid Marks");
//     }

// }



// write a menu driven program
#include<stdio.h>
#include<stdlib.h>
int main()
{int n,f,a,num=0;
    do
    {   
       
        printf("\n1.Factorial of a number\n");
        printf("2.Even or Odd\n");
        printf("3.Area of circle\n");
        printf("4.sum of first N natural number\n");
        printf("5.Exit\n");
         printf("Enter a choice 1 to 5\n");
        scanf("%d",&n);
        switch (n)
        {
            case 1:
                printf("Enter a number");
                scanf("%d",&a);
                num=a;
                f=1;
                while(a)
                {
                   f=f*a;
                   a--;
                   
                }
                printf("\nFactorial of %d is %d",num,f);
                break;
            case 2:
                printf("Even odd done");
                break;
            case 3:
                printf("Area of circle done");
                break;
            case 4:
                printf("sum of first n natural number");
                break;
            case 5:
                    exit(0);
            default:
                printf("Invalid number please input 1 to 5\n");
               
        }


    } while (n!=5);
    
}
