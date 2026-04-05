// take month number as input and display day in that month 
#include<stdio.h>
int main()
{   
    int month;
    printf("Enter the month number");
    scanf("%d",&month);

    switch (month)
    {
    case 1 || 6 || 5 || 3 || 4:
        printf("31 days");
        break;
    case 2:
        printf("28 days in feb");
        break;
    default:
        printf("entered an invalid unmber");
        break;
    }

}





// menu driven program already done