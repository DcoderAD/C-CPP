// print prime value up to n number
// #include<stdio.h>
// int main()
// {
//     int i,x,n;
//     printf("Enter value of n");
//     scanf("%d",&n);
//     for(x=2;x<=n;x++)
//     {
//     for(i=2;i<x;i++)
//         if(x%i==0)
//         break;
//     if(i==x)
//         printf("\n%d",x);
//     // else
//     //     continue;
//     }

//     return 0;
// }



// prime numbers btween two numbers
// #include<stdio.h>
// int main()
// {
//     int a,b,x,i;
//     scanf("%d%d",&a,&b);
//     for(x=a+1;x<b;x++)
//     {
//         for(i=2;i<x;i++)
//             if(x%i==0)
//                 break;
//         if(i==x)
//             printf("\n%d",x); 
//     }   
//     return 0;        
// }    




// FIND THE NEXT PRIME NUMBER OF A GIVEN NUMBER
// #include<stdio.h>
// int main()
// {
//     int x,i;
//     printf("enter a number");
//     scanf("%d",&x);
//     for(x++;;x++)
//     {
//         for(i=2;i<x;i++)
//             if(x%i==0)
//                 break; 
//         if(i==x)
//            { printf("%d",x);
//              break;
//            }
//     }
//     return 0;
//}





// hcf of two
// #include<stdio.h>
// int main()
// {
//     int a,b,H;
//     printf("Enter two number");
//     scanf("%d%d",&a,&b);
//     for(H=a>b?a:b;H>=1;H--)
//         if(a%H==0 && b%H==0)
//             break;
//         printf("hcf is %d ",H);
//     return 0;
// }




// find out if two numbers are coprime or not--when hcf of two numbers is 1 they are co prime
// #include<stdio.h>
// int main()
// {
//     int a,b,H;
//     printf("Enter two number");
//     scanf("%d%d",&a,&b);
//     for(H=a>b?a:b;H>=1;H--)
//         if(a%H==0 && b%H==0)
//             break;
//     if(H==1)
//         printf("co-prime");
//     else
//         printf("not a co-prime");
//     return 0;
// }