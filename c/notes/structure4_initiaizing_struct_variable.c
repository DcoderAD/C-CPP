/*Initializing structure variable
 */
// initialization mean how do we put value in struct variable??

// how to initialize struct variable "DURING DECLARATION"??



// struct date
// {
//     int d, m, y;
// };
// int mai()
// {
//     struct date d1 = {22, 9, 2026}; // initialize during declare
//     return 0;
// }




// structure variable vs member variable
//  d1-->       is the structure variable
//  d,m,y--->   are structure member variable

// all the member varibles does not have their own identity.means you can not access them or assign values  saperatelly like this is not possible its Error:---->
//  d=12;
//  m=1,
//  y=2026

// as we know member var dont hold their own identity the identified using the structure variable in our example its d1.so access them using dot operator.its the right way to access the member variable.this dot operator is also called member access operator.

//              struct var.member var
//                  d1.d=12;
//                  d1.m=1;
//                  d1.y=2026

// Initialization of member variable after the declaration of the structure variable.
#include <stdio.h>
struct date
{
    int d, m, y;
} d4, d5;
int main()
{
    struct date d2, d1 = {12, 1, 2026}; // initi during declare.
    struct date d3;                     // init after declaration line 47-49
    d3.d = 12;
    d3.m = 1;
    d3.y = 2026;
    printf("Enter date");//taking user input for date
    scanf("%d/%d/%d",&d4.d,&d4.m,&d4.y);//%d/%d here input will be saperated using /.it wont accept space or enter.
    printf("%d/%d/%d",d4.d,d4.m,d4.y);
     return 0;
}