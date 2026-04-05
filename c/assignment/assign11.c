// #include<stdio.h>
// int main()
// {
//     int a=1;
//     while(a<6)
//     {
//        printf("\nhello everyone");
//         a++;
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n,i=0;
//     printf("Enter the value of n");
//     scanf("%d",&n);
//     while(i<n)
//     {
//         printf("\n%d",n-i);
//         i++;
//     }
//     return 0;
// }




// #include<stdio.h>
// int main()
// {
//     int n,i=1;
//     printf("Enter the value of n");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         printf("\n%d",i*2);
//         i++;
//     }
//     return 0;
// }




// #include<stdio.h>
// int main()
// {
//     int n,i=1;
//     printf("Enter the value of n");
//     scanf("%d",&n);
//     while(i<n)
//     {
//         printf("\n%d",2*n-i*2);
//         i++;
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n,i=1;
//     printf("Enter the value of n");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         printf("\n%d",2*i-1);
//         i++;
//     }
//     return 0;
// }

// 



// #include<stdio.h>
// int main()
// {
//     int n,i=1;
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         printf("%d\n",2*n-2*i+1);
//         i++;
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n,i=1;
//     printf("Enter a number");
//     scanf("%d",&n);
//     while(i<=10)
//         {  
//             printf("%d\n",i*i*i);
//             i++;
//         }
//     return 0;
// }



// #table of any number here 
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the value of n");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("\n %d X %d = %d",n,i,i*n);
        i++;
    }
    return 0;
}