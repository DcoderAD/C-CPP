/*Default argument
___________________
-c does not have it
-in below program   add(int a,int b,int c) function want 3 argument to pass but during call we just pass two arguments.to compunset this behaviour what we did during function declaration is we assign a default value 0 to third variable  add(int,int,int=0); so if you dont pass any third argument even then program wont give any error.we are doing addition in this program so we pass 0 we can pay any number according to our requirement.
-RULE:  if ek argument ko default banaya to uske 
        baad aane wale arguments bhi default hone chahiye its compulsary.
        means default argument ke baad non default argument nahi aa skta hai.

        int add(int,int,int=0); -->Correct
        int add(int,int=1,int=0);-->Correct
        int add(int=0,int=0,int=0); -->Correct
        int add(int,int=0,int);---->Error
        int add(int=0,int,int);--->Error
        int add(int=0,int,int=0);--->Error    

*/

#include<iostream>
using namespace std;
int add(int,int,int=0);  //default argument
int sub(int,int=0,int=0);
int main()
{   int a,b,c;
    cout<<"Enter two numbers";
    cin>>a>>b>>c;
    cout<<endl<<"sum of two numbers"<<add(a,b);
    cout<<endl<<"sum of three numbers"<<add(a,b,c);
    return 0;

}
int add(int a ,int b,int c)
{

}

int sub(int a,int b,int c)
{

    
}