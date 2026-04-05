// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a num");
//     scanf("%d",&num);
//     if (num>0)
//         printf("positive");
//     else if(num<0)
//         printf("negative");
//     else    
//         printf("zero");
//         return 0;
// }



// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter a character");
//     scanf("%c",&ch);
//     if(ch>='a'&&ch<='z')
//         printf("its in lowercase");
//     else if(ch>='A'&& ch<='Z')
//         printf("its in upeer case");
//     else if(ch>='0'&& ch<='9')
//         printf("its a number")
//     else 
//         printf("special character");
//     return 0;
// }




// valid triangle
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter the lenth of tringle all sides");
//     scanf("\n%d%d%d",&a,&b,&c);
//         if(a+b>c && a+c>b && c+b>a)
//             printf("this is valid triangle");
//         else
//             printf("invalid trangle");
//     return 0;
// }




#include<stdio.h>
int main()
{
    int month;
    printf("Enter month number");
    scanf("%d",&month);
    if(month==1 || month==3 || month==5|| month==7|| month==8 || month==10 || month==12)
        printf("31 days month");
    if(month==4 || month==6 || month== 9 || month==11)
        printf("30 days");
    else if(month==2)
        printf("29 or 28 days");
    else
        printf("invalid number");
    return 0;

}