#include<iostream>
using namespace std;
namespace n1
{ int a=10;
    int b=20;
} 
namespace n2
{ int a=11;
    int b=22;
}

int main()
{ 
    cout<<n1::a+n1::b<<endl;
    cout<<n2::a+n2::b;
    return 0;
}