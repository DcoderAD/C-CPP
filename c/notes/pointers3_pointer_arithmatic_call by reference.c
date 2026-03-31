/*Pointers arithmatic and call by reference
____________________________________________
int a,b,*p,*q;
p=&a;
q=&b;


do's and don't in pointer arithmatic-->

Don't==>
_________
-cant add two pointers.  p+q :Error
p+q :Error
p*q :Error
p/q :Error
p*5 :Error
p/3 :error


Do's==>
_______
-these helps us in performing operations on array and other topic.to access or traverse the elements.

p+1 :Valid-(suppos p me int address 1000 hai. 
     then p+1-->1004,p+2--->1008.bcz int type ka 1 block add hoga jo 4byte ka hoga )
     p+1-->will give you next memory block

q-1 :Valid-if q me 2000 ho to q-1--> 1996

q-p :Valid- when both pointers are of same 
     type only then the subtraction btw two pointer is possible.here both are int.
     q-p=2000-1000==>1000 & 1000/4=>250int var bich me aa sakte hai

p++ :Valid p++ means p+1
    
*/
// ----------------------------------------------


/*Learn the Use of pointer using simple proram
-there are so many use of pointers in c proramming
*/



#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);
    printf("a=%d  b=%d ",a,b);
    // swapping code call and interchange values
    swap(&a,&b);//this is call by reference
    printf("a=%d  b=%d ",a,b);

    return 0;

}
// in swap function we are not accessing the data of variable we want the change in variable itself this is why we need to pass address of these variable not data.
void swap(int*p,int*q)
{// we cant access a,b variable of main() function into swap function.so we will use pointer var *p ==a and *q==b
    int c;
    c=*p;
    *p=*q;
    *q=c;
}

/*
CALL BY VALUE VS CALL BY REFERENCE
___________________________________
-Formal arg->when we create function of take somthing we make some variable in it.like--> void add(int a,int b);called formal argument

-Actual argument-->when we call the function we pass perameters called actual argument.

-Formal arguments can be of 2 type-->
        1.ordinary variable
        2.pointer variable 

-so when ever you make a function whos type is of take somthing.if you make ordinary variable in that function then during the function call you will pass ordinary values and if you make pointer variable in that function then during calling that function you will pass address.

-when we pass ordinary value we call it "call by value" and when we call it by address we call it "call by reference".
*/



/*
Why we use & in scanf??--->scanf("%d",&a);
_______________________
- so in scanf("%d",&a); we are calling scanf function and it is call by reference.and it means where ever the scanf functions defination is written it is take somthing type function and formal arguments of scanf will be pointer variable...this is why it is able to take address of a variable.and when we enter input from keyboard it will be stored on the address of a variable.
 
*/