/*more about pointer
______________________

-Two type of data-->
        1.ordenary(value type variable)
        2.pointer(nullable type variable)

-why we call it nullable??will learn later
-null is a specially value which you can only put in pointer variable not in ordenary variable.its not that null which we learn in the case of string.

-pointer variable-->a variable which contain address of another variable.
int *j,a;
j=&a;  //j is a pointer to an int block 


-Size of a variable
________________________

int a,*p;-->a(4byte memory)
char b,*q-->b(1 byte memory)
double c,*r->c(8 byte memory)

-but *p,*q,*r are pointer variable and they all containt 8 byte memory only.doesnt matter if it is of int,float,double or char 

-size of ordinary variable depends on its data type but size of pointer var. does not depends on its data type.they contain address and address will always be int.and last digits of a memory address is huge so we need 8bytes to store it

-then why we spacify pointerr type means int *p or float *q .it shows that what kind of memory block pointer is point at.and we can not put one type of pointer data into another type of pointer data

int a,*p;
char b,*q;

p=&b; Wrong but why?? 
p is int type of pointer and we are trying to store char type  data in it.it may or may not give any error but its wrong.

-when ever you need to make any pointer variable what type you will create it??
so your pointer will also be the same type of the data it represents or point to... just see what type of data that pointer variable is going to represent.



-what is the base address ???
the address of the first byte of any variable is called base address.

-a pointer variable always stores base address of tha variable it is point to{means starting addres} if { int a,*p;} a is 4 byte int variable and each byt e address is like 100,101,102,103.......then 100 is the base address of a and pointer variable *p will store the base address of a which is 100.


-so when we only providing the base address to the pointer then wht it is representing remaining bytes also ,not the base address only???
-because the pointer type is also int type so when you provide base address of int var.it will automatically know that there are 3 more byte of that int variable.so the type of pointer variable helps us to prepresent the complete data of that variable not just the base address.so the type of pointer is helping use to know the data of that variaable which it is pointing.



-int a,*p;  address of a -100
char b,*q;  address of b -200
double c,*r;address of c -300
suppose  p=&b; p is int type and containing a base address (200) of b which is of char type.so  compiler already knows that p is int type pointer variable and address contined by p {which is currently 200} is also of int type.as we know 200 is the base address of b and it has reserved only 1 byte,but *p will access extra 3 byte(which is ILLEGAL MEMORY ACCESS) because it is assuming that  it is pointing the base address of integer and it will become the case of illegal memory access.

-so just simply remember the pointer jis type ka hai usi type ke variable ka address contain karega thats it

-size of ordenary variable depends on its type.

-pointer variable can be any type but it will always contain 8 byte of memory only.

-how we read these???
int a,*p;-->p is pointer to int variable
char b,*q;->p is pointer to char variable






Extended concept of variable
_______________________________
int x=5,*p,q**,r***;
p=&x;

-jitne * us level ka indirection.ya utne level ka pointer.p me x ka address,q me p ka address ,r me q ka address

-pointer jis level ka hota wo usse 1 level kam ka address contain kar sakta hai. so ***r ka lever 3 hai wo only **q ka (level 2) address rakh skta hai na ussse kam na jyada...exactly 1 kam. *p ka level 1 hai wo 0 level wale pointer mens jo pointer hai hi nahi usi ka address hi contain kar payega means x variable ka .

-jab bhi kisi variable ke aage * lag jata hai to ye wo variable ban jata hai jise ye point kar raha hota hai

*/