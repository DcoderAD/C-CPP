/*Call by reference & reference variable in c++
_______________________________________________
-in c there was formal argument
-what is formal arg?? -->when we define a function we pass some argument in it called formal arg.
-in c 2 type of formal args were there-->
                    1.value type variable
                    1.pointer var or nulable var
-meaning of call by reference in c and c++ is diffrent,we will learn
-how we declare a reference variable?
            -->    int &y    (& ->em percent)
            -->  & will be called reference
-there is no difference in address and reference but we use "address" in the context of pointer variable and we will use reference  in the context of reference varience.
                address ---->pointer var
                reference -->reference variable
-so pointer variable will contain address
            int x=10;
            int *p;
            p=&x

-reference variable will contain reference
            int x=10;
            int &y=x;

-when we create ordinary or pointer variable we do not need to initialize it compulsarily.

-when creating reference variable we need to initialize it and its compulsary.and we will initialize a reference variable with an ordinary variable.

            int x;
            int &y=x;  

-pointers are extremely powerful but comes with lots of responsibility otherwise creates problem if you are not good at it.

-reference variables are less powerful then pointer variable and safer.if you want to be on the safe side and not an expert programer with pointers use reference variable.

-Example
            int x=7;
            int *p;
            p=&x
-suppose  x=7 and addres of x is 1000
          p=1000 and address of p is 2000

        we have 1 ordinary var x and one pointer var p we can access x and p both using pointer variable.by writing p ypu can access 1000 and by *p you can access 7.

-but you can never access a reference variable itself by its own name.we can only access the variable jiska us reference variable ne reference contain kiya hua hai.     

-see below code y++ means it will increment in x value not the y. means y is the another name of that variable whos reference it is containing
            int &y=x;
            y++;      //y==x (both are alias)

-once we create reference variable and assign some ordinary value to it then we can change that ordinary value.it will always represent that one ordinary value.
-as we write p=&x here we dont need & we can directly write int &y=x and we can directly access it using y++ we dont need to do dereferencin like *p=7 .we are directly incrementing in x using y++.

-so what is the benifits when we define a function and we pass formal arguments it can be among 3 --->
            1.ordinary
            2.pointer
            3.reference
so we study it by making a program here.


                */

#include<iostream>
using namespace std;
void f1(int,int);//ordinatry
void f2(int*,int*);//pointer
void f3(int&,int&);//reference 

int main()
{
    int x=10,y=20;
    f1(x,y);            //call by value
    f2(&x,&x);          //call by address in c++
    f3(x,y);   //call by reference but looks same as call by value ?? confused right??    
    
    //solution: //by looking at declaration you can differentiate between there are two different type of functions and variable one function is passing  ordinary variable  and other one is passing reference variable.
}
void f1(int a,int b)
{//no changes in original x,y var.
    a++,b++;   
}

void f2(int *p,int *q)
{//will change value of original x and y;
    *p=12;  
    *q=90; 
}

void f3(int &m,int &n)
{//will change value of original x and y;
    m=100;
    n=200;
}

//by looking at a function call we can rezognize the call by address(pointer) ,but in function call , call by value and call by reference both looks same if you want to differenciate btw them just look at either their "functions declaration or their function defination" there you will see the difference.

//in c scanf("%d",&x) and in c++ cin>>x; how they take input????
//--->      scanf("%d",&x);--->is call by address.
//--->      cin>>x;        --->is call by reference.  

//normally in java ,pytho,js you will use referece variable alot not pointer variable.