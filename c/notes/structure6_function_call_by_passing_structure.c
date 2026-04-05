/*Function call by passing structure
-in a take somthing type function
-when we call a function and we pass some actual arguments then its a take somthing type function
-suppose we are callint f1(a,b) and a is int type and b is float type

f1(a,b)//atual args
void f1(int x,float y)//formal args
{
    ......
}

-so the kind of formal variable we are creating we will pas the same type of actual variable during function call

*/


// struct date d1;
// f1(d1);

// void f1(struct date x)
// {
//     ;;;;;
// }



#include <stdio.h>
struct date inputDate();
void showsate(struct date );
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

   showdate(d6);
     return 0;
}
void showsate(struct date b)
{

    printf("%d%d%d",b.d,b.m,b.y);
}
struct date inputDate()
{   struct date mydate;
    printf("Enter Date");
    scanf("%d/%d/%d",&mydate.d,&mydate.m,&mydate.y);
    // & is applying on the member variable not the mydate variable.mydate is just accessing those member var using dot operator
    return mydate;
}
