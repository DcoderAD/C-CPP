/* STORAGE CLASSES
____________________

WHY DO WE STYDY STORAGE CLASSES IN C?????
--------------------------------------------
-While a data type tells the compiler how much memory to allocate (e.g., 4 bytes for an int), the storage class defines the variable's behavior throughout the program's lifecycle.

We study them because they provide granular control over three critical properties: Scope, Visibility, and Lifetime.

*/

/*
-this is not the oops classes concept here classes means classification of grouping

-when we create a variable it belong to some storage classes.

-STORAGE CLASSES-->classification of charactristics of a variable on the basis of variable properties like
                default value
                memory
                scope
                life

-TYPES OF STORAGE CLASSES-->                        KEYWORD

            1.Automatic storage classes             auto
            2.Register strorage classes             register
            3.Static storage classes                static
            4.Extended storage classes              extern


            -these 4 classses differentiate on the basis of 4 properties mension above--->
                 default value
                 memory location
                 scope-from where you can access that variable
                 life

-till today we were simply using  simple----> int x
this simple form will considerd in to automatic storage classes.

// ----------------------------------------------------------------------------------------------------------





/storage classes and their property


  //                                   keyword            default-value              memory           scope           life

//auto                                  auto                garbage                    ram              block           block





//register                              register            garbage                 cpu reg             block           block





//static                                static              0                           ram             block           program






//external                              extern              0                           ram             global          program

*/




















// program for automatic storage classes.
#include <stdio.h>
void f1();
int m()
{
    f1();
    return 0;
}
void f1()
{
    auto int x = 5; // weather you mension auto or not bydefault its auto class variable
    printf("%d\n", x);
    {
        int y = 4;
        printf("%d\n", y); // Life of y limited to the block
        printf("%d\n", x);
    }
    // printf("%d",y);//Error:undeclared identifiers.if you coment out this line then no error will be in the code
    printf("%d\n", x);
}
// before there were rule in c that you can declare a var after action statement but in modern c you can do that
// --------------------------------------------------------------





// here in this program two x variable are declared which one will print when just find out???
//RULE: jo variable jitna local hoga ..jitna pas ka hoga use hi consider kiya jayega.inner block mee inner wala x variable consider hoga
#include <stdio.h>
void f2();
int m1()
{
    f2();
    return 0;
}
void f2()
{
    auto int x = 5;    // weather you mension auto or not bydefault its auto class variable
    printf("%d\n", x); // print:5

    {              // one x var is here in inner block so wont give      error  and print 4
        int x = 4; // two x variable?? which value of x to be concidered?? 4 or 5

        printf("%d\n", x); // print:4
    }

    printf("%d\n", x); // print:5
}
// --------------------------------------------------------------
/*REGISTER STORAGE CLASSES
______________________________
-as we know that in cpu there is ALU,cu,memory unit are there .we know the variables get the momory in ram but if a variable used alot and again and again in the program then it will consume alot of time to go from ram to cpu memory units register .to save time and for faster execution we make it register storage classes type variable so it takes less time.
example:

register int x-=5;

-NOTE: making a variable register storafe class type is a request it is not mendatory that,the variable will definatly store at cpu register....several factor are there like if register in cpu is free or not..lif size of variable is very big and so on....

-as we can just request to store variable in cpu register if compiler ignores the request then or variable will become automatic storage class type variable

-we will never know during execution that weather variable is is stored in ram or cpu register 
*/


// --------------------------------------------------------------

/*STATIC STORAGE CLASS
________________________
-it is popular and more in use.
*/

#include <stdio.h>
void f3();
int max()
{   printf("x---y\n");
    f3();
    f3();
    f3();
    f3();
    f3();
    
    return 0;
}
void f3()
{
    int x=0;        //local variable.by default stores---> garbage
    static int y; //static local variable.by default stores---> 0
    x++;
    y++;
    
    printf("%d---%d\n",x,y);//output:1  1
   
}   
//OUTPUT: x---y
    //   1---1
    //   1---2
    //   1---3
    //   1---4
    //   1---5

//OUTPUT: int x=0 is automatic var whos life ends within the block.so everytime when f3() called up output of x will be 1.

//but static int y is of static type variable and its life remaint till the end of the program so it will increase everytime like 1,2,3,4,5....se the outpur
// ---------------------------------------------------



/*EXTERNAL storage classes
_____________________________
-static and extern has only one difference extern can be accessible from everywhere in the program bcz their scope is global.but scope of static is limited inside the block it was created

-when we declare a variable out side of any function it automatically becomes global variable (external storage class variable) so we dont need to write extern keyword there.extern keyword is used for a different purpose.

-life of it is till the program ends

-make global variable only then when we need that variable till the end of the program otherwise it will stored in the memory till the end and waste that memory without any use.
otherwise make it a local variable.so try to create global var as less as possible.

-When to use Extern keyword???
so when we make it globle and declare it on the top of main function then we use this variable it wont give any error.but suppose if you use it to print its value before declaration and you declare it later then it will give error that undeclared variable.
means when we use a global variable in a function and the declaration of it is after the function.then for use this variable in that function we will need to inform that function that we are using that variation in function so we will write this line in that function where we are using that variable.....
                   extern int x;
if you dont get it just google it and learn about it
*/




//External storage class variable progrem->
#include <stdio.h>
void f4();
int x;//this is external storage class var.but why we did not use exern keyword ???????
int maia()
{   printf("%d\n",x);
    f4();
    f4();
    f4();
    
    return 0;
}
void f4()
{   //int x=10;//coment and decoment this line and observe output
    x++;//here x has two x variable one is global and one is local.but the local will get prioritize.
    printf("%d\n",x);//output:1  1
   
}   
//output:  0
        // 1
        // 2
        // 3




//where we use extern keyword--->
//if we have multiple files in our project and we want to use the global variable of one file in other then in that case also we use extern to use that variable.
#include <stdio.h>
void f5();

int main()
{   extern int x;//informing that we are using global variable which is declared later in the program.but we are using that in this function before its declaration so it doesnt give error.
    printf("%d\n",x);//using it before declaring it
    f5();
    f5();
    f5();
    
    return 0;
}
int x;//global but declared here
void f5()
{  
    x++;
    printf("%d\n",x);//output:1  1
   
}   