/*Function overloading
______________________
-this is not in c but a few other oops languages support this concept like java,c++ but not python.not all opps language use it some use it some not

-as we know 5 oops key principle:
            1.encapsulation'
            2.data hiding
            3.inheritance
            4.polymorphism
            5.abstraction

-function overloading is a type of polymorphism in which we can have multiple functions with the same name but different parameters. it is also known as compile time polymorphism or static polymorphism.

-polymorphism means many forms. it is the ability of an object to take on many forms. it is the ability of a function to behave differently based on the parameters passed to it.

-how we implement polymorphism in c++?
-so we have divided it into 2 catagory on the basis of at what time we use the polymorphism concept. there are 2 types of polymorphism:

    1.compile time                2.runtime
    >function overloading         >virtual functions
    >operator overloading    

-we learn function overloading or function polymorphism in this lecture:
-function overloading:multople functions sharing same name but mapped using different parameters during function call. it is also known as compile time polymorphism or static polymorphism.
 
-in c fnctions overloading is not supported.two functions must have different name even if their prototype are different.
    prototype-->"return_type" + "fun_name" +  "arguments"


-Early binding: the job of compilers is to bind(map) a function call with appropriate function defination is called early binding.
and this is the part of compile time polymorphism.

-early binding vs late binding:
when abouve mensioned bindinf(mapping) is done at compile time then it is called early binding.and if binding(mapping) is done at runtime then it is called late binding.    

-there is somthing different then "function prototyping" we need to study which is "function signature"---->


-for having same name function in c++ we need to have function signature unique--->
        
        function signature-->"fun_name" + "arguments"
        
        *function signature does not include "return type" of function. it only includes function name and arguments of function.
-means either function name shoud be different of argument should be different .then we can have functions with same name.

-Rules for function overloading:
    1.compiler encounter a function call.
    2.then it will look for all the function defination with that name.
    3.then it will collect all the functions with that name and concider all of them as candidate functions.
    4.then 3 Rules for selecting the appropriate function from candidate functions:
        a.exact match
        b.promoting data type
        c.using default arguments

A.EXACT MATCH: if there is a function with the same name and same parameters as the function call then that function will be called.
            void f1(int);
            float f1(float);
            int x=5;
            f1(x);              //exact match with void f1(int);

B.PROMOTING DATA TYPE: if there is no exact match then compiler will look for a function with the same name and parameters that can be promoted to the parameters of the function call. for example if there is a function with the same name and parameters that can be promoted to the parameters of the function call then that function will be called.
            void f1(int);
            float f1(float);
            char d='a';
            f1(d);              //exact match with void f1(int); because char can be promoted to int but not to float.

-Typepromotion is not type conversion.in type promotion there is no data loss because we promote them into the type which can handle bigger data then its original type for example 4 byte of float promoted to 8 byte double.only two type promotion is possible-->

                    char----->int
                    float----->double

C.Type conversion: in type conversion there is data loss because we convert them into the type which can handle smaller data then its original type for example 8 byte of double converted to 4 byte float.but data loss is ok but can still convert. -->
                any premitive type can be converted into any premitive type.but not the non premitive type like class,object,structure etc.

                    void f1(float);
                    float f1(struct book);
                    char ch='a';
                    f(ch);            //exact match with void f1(float); because char can be promoted to int but not to struct book.


-unique case:
                    void f1(double);
                    void f1(float);
                    char x='a';
                    f1(x);  here both can be promoted so it will give error because of ambiguity.

-otherthan these 3 rules there will be definately error because of ambiguity because compiler will not be able to decide which function to call.

-lets do some practical---->
 */
//we can make below function using default arguments but now always we will be using default args--->>
 
#include<iostream>
using namespace std;
int add(int,int);
int add(int,int,int);
int add(int,int,int,int);

int main()
{
    cout<<add(3,4)<<endl;  
    cout<<add(3,4,5)<<endl;
    cout<<add(3,4,5,6)<<endl;
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
int add(int a,int b,int c,int d)
{
    return a+b+c+d;
} 

//use this concept of you are performing same type of concept like.you are calculating area of different shapes like circle,cuboid,rectangle etc.then you can create all the function with same name "area" which calculate area of different different shapes.