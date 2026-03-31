/* TYPES OF POINTERS
_____________________

1.Wild pointer:
---------------
-when our program runs it reserves some memory in ram and this reserved memory has two part one is free memory area and other is consumed memory are by var,function,etc.

-as program runs the ratio of consumed and free area changes because of some function call...or function end.

-as we know pointers point towards a memory address.and it can be of consumed or free memory area reserved by the program in the ram

-but in c language standart it is said to use a memory address you need to properly reserve that area first then you can use it.

-if you access memory address using pointer in programs consumed area then its fine but if you access free or unreserved memory area using that pointer it is called "ILLEGAL MEMORY ACCESS".os dosnt has any record of that free memory area.so as a programmer you have to be careful that pointer never contain invalid memory or free memory area.if operating system detect such illegal memory access it can terminate or halt the execution of your program.

-what is wild pointer???
an uninitialized pointer is called wild pointer


*/
// Example of wild pointer
int f1()
{
    int *p;//Wild pointer(no initialization and containing garbage value)
    *p=5;//illegal use of pointer.here we are trying to put 5 in that var jisko p point kar raha hai.
}
//int *p; has garbage value and this garbage value can be of free memory area from programs reserver area or may be possible that coincidenlty that garbage number may be of a consumed area address which is already reserved for some var or function or anything else. 

//so here in this case we dont know that memory access by pointer var. is valid or invalid we dont know....its unpreditcible.. this is why we call it "WILD POINTER".

/*
-how to avoid WILD POINTER problem????
when we declare a pointer variable never leave it uninitialized assign a special value to it. which is null (null pointer)

NULL POINTER:
____________
-A pointer containing null (speciall address )  is known as null pointer
-if a pointer is containing null we concider it as, it is not poniting to any address  or location 
-As a safeguard to illegal use of pointers you  can check for null before accessing 
pointer variable.
 
- but what is null?--->>memory reserved for upr program execution it has so many bytes.the first byte's address is 0 and it is concidered as NULL.

-so then in a pointer we assign NULL we assume that it is not pointing to anything.but we know technically it is pointing towards 0.but we concider that pointer is not pointing anything if it contains NULL
*/
// how to use null pointer:
int *p=NULL;
.
.
if(p!=null)
{
    *p=5;
}
//using above program we will put NULL to int *p and when ever in the life of program we will try to access that location  we will chack everytime if p!=null only then we will assign some value to it otherwise not.

//You should never try to "dereference" (read or write) a NULL pointer because address 0 is typically protected by the operating system. Attempting to do so will cause a Segmentation Fault (a crash)

//Gemini said
To understand this code, we first need to look at what a "NULL pointer" actually is in C.

1. What is a NULL Pointer?
In C, a pointer is simply a variable that holds a memory address. Normally, you point a pointer to a valid variable (like int x = 10; int *p = &x;).

// However, there are times when you don't have a valid memory address yet, or you want to signify that a pointer is "pointing to nothing." That is what NULL is for. It is a special macro (defined in <stddef.h> or <stdio.h>) that represents the memory address 0.

// Crucially: You should never try to "dereference" (read or write) a NULL pointer because address 0 is typically protected by the operating system. Attempting to do so will cause a Segmentation Fault (a crash).


// C
// int *p = NULL; // 1. We initialize the pointer to 0 (pointing to nothing)
// ...
// if (p != NULL) // 2. We check if the pointer is holding a valid address
// {
//     *p = 5;    // 3. Only if it holds an address, we write the value 5
// }


// Why the if condition?
// The if condition is a safety mechanism. In professional C code, you should never dereference a pointer (using the * operator) without checking if it is NULL first.

// If p is NULL, the if statement evaluates to false, the code inside the block is skipped, and your program avoids the crash.

// If you later assign p to a real memory address (e.g., p = &myVariable;), the if condition would become true, and it would be safe to perform *p = 5;.
// -----------------------------------------------------------------------------------


/*
    DANGLING POINTER:
________________________
-a pointer pointing to the memory location that has been deleted is called dangling pointer]

*/



int *f1()// we made this a pointer function because it needs to return address.
{
    int a;//lifetime of this a is up to this function only
    ..
    return &a;//returning a variables address.
}
void fun()
{
    int *p;
    p=f1();//p is the dangling pointer.here p is pointing to the address of a but life of *f1() was already completed afterd returning the address of a.now pointer p is pointing to &am,value of which already deleted because of life of the function already ended who was containing a.pahle &a valid tha but a delete hone ke baad wo invalid ho gaya hai and hamara pointer p usi ko point kr raha hai and usme 5 assign krne ki try kar raha hai.
    *p=5;//illegal use of the pointer

}


//one more example of dangling pointer
//if you create variable in a block in a function the the lifetime of the variable is limited to that block only.
void f1()
{
    int *p;
    {
        int x;//scope and life of x is limited to the {} block
        p=&x;

    }//after this line p has become dangling pointer
    *p=5;//illegal use of pointer
}




//one more example of dangling pointer
void f1()
{
    int *p;
    p=(int *p)malloc(sizeof(int));
    ...
    .....
    free(p);//p becomes dangling pointer here.after this if you dont assign NULL to p then it will become dangling pointer which we can see in this case
    *p=5;//illegal use of pointer
}
// -----------------------------------------------------

/*  VOID POINTER
    _____________
-we cant create a normal variable with the name void.

-but we can create a pointer variable with the name void

-void pointer is a generic pointer that has no associated data type with it.

-void pointer can hold address of any data type means we can assign address of int,float,double or char any type in the void pointer.but but but remember void pointer cant be dereferenced.
*/
void *p;//can contain address of any data type
int x;
p= &x;//here it is containing address of int data type
*p=5;//ERROR: but we are trying to dereference the void pointer.

/*
but why cant we dereference the void pointer?????
because we are trying to do *p=5 but pointer type is void and pointer contain address where we are trying to store 5.pointer me address hai and kis type ke block ka address hai wo clear nahi hai.to base address me aage kitne block tak memory reserve krwani hai wo pata nahi chalega.isliye error aati hai.but we have a solution for it....which is TPYE CASTING\



You cannot dereference a void * directly (e.g., *p) because the compiler doesn't know how many bytes to read or how to interpret the data (is it an integer? a float?). You must cast it first.
*/

// TYPE CASTING
________________
void *p;
int x;
p= &x;
*p=5;//we cant do the dereferencing when we dont know the type of pointer.so do the type casting
*p=5===>  *(int*p)=5    

// by writing int*p we are performing type casting for the pointer to know what type of data it will pont to.and then we will perform the dereferencing of it and assign 5 to that int block ----->  *( int*p )=5

//but why int* not only int?? 

//because we want to point to the address of the int block.