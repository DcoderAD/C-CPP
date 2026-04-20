/*cin & cout
-input and output commands in c++
-printf()---->cout
-scanf()----->cin
-we can use printf and scanf but we dont use them in c++ because they are not object orented they are procedure oriented way.

-class:
                variable 
                function
                operator
    :object of a class can access the variable,function and operator.

    :variable,functions,operator can be accessed using dot operator.but we can call operator using two different method and we will learn object.operator method later.
                object.variable
                object.function
                
                object.operator (bad me padhenge)
                objectoperator-->  cout<<


-output instruction in c vs c++:
        printf---> A predefined function
        cout  ---> A predefined Object
        <<    ---> Insertion operator when used 
                    with cout other then that its left shift operator

        printf("Welcome");
        cout<<"welcome"; 


        printf("value of x is %d",x);
        cout<<"value of x is "<<x;


        printf("sum of %d and %d is %d",a,b,a+b);
        cout<<"sum of"<<a<<" and "<<b<<" is "<<a+b;



-input instruction in c vs c++:
        scanf---->A predefined function 
        cin>> --->A predefined object
        >>   ---->Extraction operator

        scanf("%d",&x);
        cin>>x;

        scanf("%d%d%d",a,b,c);
        cin>>a>>b>>c;


-manipulator:
        endl; --->line change

-namespace:
        team1:
            namespace- A1
                v1,v2  (variable)
                f1,f2  (function)
                c1,c2  (classes)
        team2:
            namespace- A2
                v1,v2  (variable)
                f1,f2  (function)
                c1,c2  (classes)

create a namespace:
            namespace A1
            {
                int v1,v2;
                void f1();
            }

            namespace A2
            {
                int v1,v2;
                void f1();
            }



        */
//below is the first c++ program exactly same as c.c++ is the superset of c so every c program is also a c++ program.evey c program will run in c++ as it is there is no problem in that.


/*
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number");
    scanf("%d",&x);
    y=x*x;
    printf("square of %d is %d",x,y);
    return 0;
}
*/

//same programe with proper c++ formating using cin & cout.


// #include<iostream> //cin & cout declaration header
// int main()
// {
//     int x,y;
//     std::cout<<"Enter a number";
//     std::cin>>x;
//     y=x*x;
//     std::cout<<"square of "<<x<<" is "<<y;
//     std::cout<<std::endl;   //cout<<"\n"; but use endl in cpp 
//     return 0;
// }

                        //OR

#include<iostream> 
using namespace std;  //use this line 
int main()
{
    int x,y;
    cout<<"Enter a number";
    cin>>x;
    y=x*x;
    cout<<"square of "<<x<<" is "<<y;
    cout<<endl;   
    return 0;
}