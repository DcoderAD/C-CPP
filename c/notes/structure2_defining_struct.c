/*Defining a structure in c
1.How to define a custom data type using structure???
*/

//creating a struct data type to store date-->
      
        struct date
        {
            int d,m,y;
        };

//creating a struct data type for employee-->

        struct Employee
        {
            int empid;
            char name[20];
            float salary;
        };

//how we will actually define structure in a actual c programe:
//if you define structure defination in a functions body like in main or other is called it "Local Defination" of th structure.accessible only in that function body.
//if yo define structure defination outside of any function we call it "Global defination".can be accessed in whole programs body.

#include<stdio.h>
struct employee  //Globaly defination of struct
    {
        int empid;
        float salary;
    };
int main()
{   
    struct date  //local defination of struct.
    {
        int d,m,y;
    };
    return 0;
}