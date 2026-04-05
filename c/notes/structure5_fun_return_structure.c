/* Function returning structure
1.only works with return somthing
*/

// struct date
// {
//     int d, m, y;
// } d1;


// d1=f1() //d1 is of date type so the f1() will also return date type of data.
//how you would define a function which is returning a struct type of data????


// struct date
// {
//     int d, m, y;
// } d1;

// d1=f1()

// struct date f1()  //struct date is the return type for the function f1
// {
//     return.....;
// }




//how a function is returning the data of a structure variable---->

#include <stdio.h>
struct date inputDate();
struct date
{
    int d, m, y;
} d5;
int main()
{
    struct date d2,d4, d1 = {12, 1, 2026}; // initi during declare.
    struct date d3,d6;                     // init after declaration line 47-49
    d3.d = 12;
    d3.m = 1;
    d3.y = 2026;
    d6=inputDate();

    printf("%d/%d/%d",d6.d,d6.m,d6.y);
     return 0;
}

struct date inputDate()
{   struct date mydate;
    printf("Enter Date");
    scanf("%d/%d/%d",&mydate.d,&mydate.m,&mydate.y);
    // & is applying on the member variable not the mydate variable.mydate is just accessing those member var using dot operator
    return mydate;
}