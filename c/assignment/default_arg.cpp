#include<iostream>
using namespace std;
int sum(int,int);
int main()
{
    int a,b,c;
    cout<<"Enter two values";
    cin>>a>>b; 
    cout<<"sum of a & b is"<<sum(a,b)<<endl;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    cout<<"sum of<<a<<b<<c<<"is"<<sum(a,b,c);
    return 0;
}
int sum(int x,int y)
{   return x+y;
}
