/*Pointers
___________
-just revise the memory concept which was explained in the string with memory.
-we can call address as reference too in c language
-we do zero based counting 
-variable address will always be a whole number.
-we cant decide or assign a perticular memory address for a variable.but yes we can know that what is the address assigned to that variable by the system.  
-we cant change the address of a variable
*/


/*referencing and dereferencing operator
_________________________________________
-referencing operator===> &
-dereferencing operator=> *

int x=5;
printf("%d",&x)//print address of x
printf("%d",*&x)//* se & cancel ho jayega and x ki value print ho jayegi.means reference ki dereferencing ho jayegi


-About &----->
______________

        -address of operator
        -referencing operator
        -unary operator
        -& ke bad always variable name aayega like &x


-About *----->
_______________
 
        -when we use * as unary operator is is called indirection operation.
        -also known as dereferencing operator
        -unary operator
        -* ke baad always address aayega like 
        id address of a variable is &x=100 then *&x.we cant write directly *100 because we dont know in advance that what address will be assign to x by the system so we will use &x in place of 100.
        -so *&x---> &x become 100--->*100--->*  address 100 ki dereferencing kr ke variable ki value dega
        -so &x variable le kar address deta tha *&x address le kar variable dega
        ----->*&x becomes x



int x;
&x=7;
-trying to change the address of x.which is not possible in c.one more thing &x is not a vaiable its a memory address number and we know that on the left side of = (assignment operator) always should be a variable not a constant.

-in below case name of the char array str itself present address and we cant assign any thing in str.

char str[10];
str="hello";//Error
-str is address cant assign anything in address.
-we use strcpy(str,"hello") instead of str="hello"
*/



/*how do we store address in varible using pointer???
__________________________________________


int x=5;
int j;//simple variable
j=&x// Error: &x is an address and we cant put address in an ordinaty variable

int x=5;
int *j;// *j is a pointer variable with can contain address.here * is not any operator its just a sign for compiler to know this is a pointer variable.
j=&x;// Correct
printf("%d",*j);//here * is a dereferencing operator 

-kisi bhi pointer variable ke age * laga ho to wo pointer variable wo variable ban jata hai jise wo point kr raha hota hai.
                *j==x
*/