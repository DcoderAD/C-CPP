// #include<stdio.h>
// int main()
// {
//     int a,chance;
    
//     for (chance=1;chance<=3;chance++)
//     {
//         printf("Wnter a number");
//         scanf("%d",&a);
//         if (a%2==0)
//             break;
//     }
//     if (chance==4)
//         printf("sorry CHUCHU your chance is over better luck next time");
//     else
//         printf("GOTU you winn");
//         return 0;   
// }




// #include<stdio.h>
// int main()
// {   
//     int num,add=0,chance;
//     for(chance=1;;chance++)
//     {
//         printf("Enter a number");
//         scanf("%d",&num);
//         if(num!=0)
//             add=add+num;
//         else
//            break;
//     }
//     printf("you have entered total %d number & the sum of those number is %d",chance,add);
//     return 0;
// }


generalized star pattern:
#include<stdio.h>
int main()
{
    int i,j,row;
    printf("how many rows you want?");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {    for(j=1;j<=2*row-1;j++)
            {
            if(j>=row+1-i && j<=row-1+i)
                printf("*");
            else    
                printf(" ");
            }
            printf("\n");
    }
}