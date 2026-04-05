// // #include<stdio.h>
// // int main()
// // {
// //     int y;
// //     printf("enter a year to check weather it is leap or not");
// //     scanf("%d",&y);
// //     if(y%100)
// //         if(y%4)
// //             printf("not a leap year");
// //         else
// //             printf("its a leap year");
// //     else
// //         if(y%400)
// //             printf("not a leap year");
// //         else
// //             printf("its a leapyear and a centuary yeae");
            
// //     return 0;        
// // }






// #include<stdio.h>
// int main()
// {   int a,b,c;
//     printf("Enter the value of a,b,c");
//     scanf("%d%d%d",&a,&b,&c);
//     printf("%d",a>b? a>c?a:c : b>c?b:c);
//     return 0;
// }


#include <stdio.h>

int main() {
    char ch;

    // Asking for user input
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Logic using ASCII ranges
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an Uppercase letter.\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a Lowercase letter.\n", ch);
    } 
    else {
        printf("'%c' is not an alphabetic letter.\n", ch);
    }

    return 0;
}








