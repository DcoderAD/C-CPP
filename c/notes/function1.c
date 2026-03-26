// functions
/*
- fuction is a block of code
-block--->>{}
-function has some name for identification
-a c program can have as many as function
-function name in c program must be unique
-one function must be main()
-without main() function you can compile  the program and create the machine code but can not create exe file by link it because linker doesnt work there.linker will give error
-execution of a function always begins from main() function
-even in the smallest c program main() should be there
-not each block is a function like if{},while{} these are not any function
-a function executes only when it is called or invoked
-three things about functions
        -function declaration(function prototype)
        -function defination 
        -function call



// function defination
_______________________
returnType FunctionName(arguments is optional)
{   
    code

    ....
}


function call(using the function)
______________
functionName(arguments if any );

arguments are subjective

before using or calling any function you need to decalre that function similar to variable (we can only use variable after declaring them otherwise error would be there)



function declaration
_____________________
same as function defination and use ; at the end
FunctionName(argument);


-function is a way to implememt modularity in programming. 

-modularity meaans  splitting a big program into small modules or functions.and reducing the complexity of a program and making it more readable and maintainable.

-no keyword is a function in c. 

-functions are of two types
1. library functions(predefine functions).
        -like printf(),scanf(),getch(),exit() etc
2. user defined functions.
        -main()



-predefined functions declarations is in header file but defination is in library file. 
*/




#include<stdio.h>
/*Declaration of a function similar as we define them but with ; at the end and without body of function*/

/*Why we are not declaring main() function?????  
because we declare function when we need to use them and call them but we usually dont call main() function that is why we dont declare main function*/

/*why we dont call main() function because main() function is called by the operating system when we run the program and it is the entry point of the program so we dont need to call it explicitly.
*/
void b();
void a(); 
int main()
{
    a();
    b();
    a();
    return 0;
}
void a()
{
    printf("hello ");
}

void b()
{
    printf("bye");
    a();
}


/*
about above program 
-we have defined 3 functions main(),a() and b().
-if function returns somthing then we need to apecify the return type of function with the type of value it is returning.
-you can define function in any order.before the main () function or after the main function.but best practice is that you shoud do declaration of all functions


-important note-->as we  know if we declare local variable it remains in the memory till the program ends.so we dont make global variables untill we need it very much and there is no options remaining.but local variable stays there till the fuction is in the memory.

-But in function its different we declare function globally becaue it will only consume memory when we call it othewise it wont.so declarering functions globally is good ractice

*/

// type thsi question on gemini---->
// give me tips about making functions in c language spacifically about what is the industry standard guidlines in using functions and what mistakes to avoid when use functions and its properties



