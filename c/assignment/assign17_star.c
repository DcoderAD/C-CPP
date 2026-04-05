// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i < 6; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             if(j<=i)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i < 6; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             if(6-i<=j)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i < 6; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             if(j<=i)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i < 6; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             if(j>=i)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i < 6; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             if(j<=i)
//                 printf("%d",j);
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i < 6; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             if(j<=6-i)
//                 printf("%d",i-j+1);
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, j;
    char K;
    for (i = 1; i < 6; i++)
    {
        K = 'A';
        for (j = 1; j <= 5; j++)
        {
            if (j >=i)
                printf("%c", K++);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
