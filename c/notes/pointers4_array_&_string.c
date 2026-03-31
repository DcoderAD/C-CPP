/*Pointer With Array
____________________
int a[10];
int *p;
p=&a[0];  //*p==a[0]

-to access arrays elemets we can increment in pointer 
as we know p=&a[0] then-->

p+0--->1000
p+1--->1004
p+2--->1008
.
.
.
p+i--->&a[i]//adding index itself

if you write    *(p+0)--->means dereferencing at 1000 address--->it is as good as a[0]

*(p+1)--->a[1]
*(p+2)--->a[2]
*(p+3)--->a[3]
.
.
.
*(p+i)--->a[i]

NOTE:===>
_________
-so  p+i==&a[i] and *(p+i)==a[i]

MORE CONCEPTS:==>
__________________
a[2]===>*(a+2)===>*(2+a)===>2[a] all are same
p[2]===>*(p+2)===>*(2+p)===>2[p] all are same

-basically all(all means related to a and b both 34 and 35 lines have same meaning) above casees are representing the same thing

-If both the lines 34 and 35 has the same meaning(a==p==1000) then what is the difference between a and p??????
Difference btw a and p--->  a is constant
                            p is variable
P=can assign address to p bcz it is variable
a=can not assign address bcz its a constant

more points--->
so instead of writing *(a+i)==*(p+i) we know a[i]==p[i] so use it

                            */
/* POINTER AND STRING
______________________

*/

#include<stdio.h>
int main()
{
char *p;
char str[]="udaipur";
p=str; //can write it too--> p=&str[0];
printf("%s",p); //p or str will give same answere
return 0;
}
//count the length of a string we have 2 fun below for that---->

//function 1
int length(char str[])//str is not a variable
{
    int i;
    for(i=0;s[i];i++);
    return i;
}

//function 2
int length(char *p)//*p is a variavble
{
    int i;
    for(i=0;p[i],i++);
    return i;
}

//in both length calculation function,length function ko jo memory milegi us memory me koi array nahi banega.aray to main() me ban raha hoga.hamare  function1 and function 2 to only length calculation ke liye element index access kar rahe hai


/*ARRAY OF POINTERS
___________________
-Here we will create an array,every element of which is a pointer variable. 

-normally we create 2D array to store elements in multiple classes.but there is restriction that we need to make every array of same size.

-if you wan to handle multiple array with different size each then we use array of pointer.in out below example we have a,b,c,d and all of them are of different size and handelled by single array of pointer ->int *ptr[4];
*/
int *p;
int *ptr[4];
int a[4],b[5],c[6],d[7];
ptr[0]=a;
ptr[1]=b;
ptr[2]=c;
ptr[3]=d;
f1(ptr);//we are passing a pointer with level one *ptr so where ever(in the formal argument in the definaion of the f1 function) this will be received, received by a two level of pointer like **k  like void f1(**k){}
//_-------------------------------------------------


/*POINTER TO ARRAY
__________________
suppose p is 1000
int*p;------->p is a pointer to a single int block.
              p+1==> p+1*4 ===>1004
int *p[4];--->p is an array of int pointers.
              it has multiple(4) int pointers.
int(*p)[4];->p is a pointer to an int array of 4
              variable.it is a single pointer.it is pointing a int array whos length is 4
              p+1==>p+size of 4 int block(4*4)->1016
 */  
//pointer to array example---->
suppos &p[0]--->1000
int a[4][5]//4 int array each has 5 elements
int (*p)[5];//pointing towards 5 size of array
p=&a[0][0];//p+1=>1020
so a[2][3]=>*(a[2]+3)=>*(*(a+2)+3)=>*(*(p+2)+3)=>p[2][3]

// -as we know a is constant and p is variable then how can we say that a[2][3]==p[2][3] because when we use them as data we can do thid no problem at all.
