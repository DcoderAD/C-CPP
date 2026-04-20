#include<iostream>
using namespace std;
int main()
{
    int n;
    long long sum=0;
    cout<<"enter value of n"<<endl;
    cin>>n;
    for (int i = 0; i<=n; i++)
        sum=sum+i;
    cout<<endl<<sum;
    return 0;
    
}