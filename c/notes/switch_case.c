// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number");
//     scanf("%d", &n);
//     switch (n)
//     {
//     case (4>3): /*if you enter 1 then this case will run because 4>3 is true means 1 */
//         printf("ten\n");
//         break;
//     case (4<3):/*this is false means 0 and we already have case 0 below so it will give error because same cases in match-case will give error*/
//         printf("twenty\n");
//         break;
//     case 0:
//         printf("thrity\n");
//         break;
//     case 4.1:/*Error: only integer constants are allowed*/
//         print("double")

//     case 1 ... 5:       /*if user enter 1 to5 this case will run     */
//         print("unique case ")
//     default:
//         printf("sorry doesnt match\n");

//     }
// }
/*




1.case cant be duplilcate

2.no need of break after default bcz switch is ending after it

3.after case you cant use variable .only constant allow like 1,2,10,20, or 'A'-->this is internally considerd as int so its allowed.Expressions are allowed too like 4>3--->true--->1

4.switch does not give answere in true false.....it gives integer 0 or non zero


5.use switch case when you need to work on too many options or choices.like some sort of menu driven program

6.break is allowed in switch body but not 'continue'
*/

// menu driven program
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int choice = -1;
    do
    {   
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.multiply\n");
        printf("4.Factorial\n");
        printf("Unique:case 5to10\n");
        printf("0.Exit\n");
        printf("5.Exit using exit() function\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Addition Done\n");
            break;
        case 2:
            printf("Subtraction Done\n");
            break;
        case 3:
            printf("Multiply Done\n");
            break;
        case 4:
            printf("Factorial Done\n");
            break;
        case 6 ... 10:
            printf("case 6 to 10 will be handeled here");
            break; 
        case 0:
            printf("chlo bhai bye bye............me ja raha hu tata\n");
            break;
        case 5:
            exit(0);
         
            /*using exit function and passing 0 will exit the programm and 0 means there was no issue in the program and its a noramal termination of the program.exit() function is a predefined function.you need to include stdlib.h to use exit function here*/
            
            /*program end krna ho to exit() use kro or only switch ki body se bahar aana hai to break; use kro*/
        default:
            printf("invalid choice,please \n");
            break;
        
        }
    } while (choice != 0);

    return 0;
}





