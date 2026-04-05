#include <iostream>
#include <vector>
using namespace std;
int main()
{   int count , sum=0,i;
    cout<<"enter the number of element";
    cin>>count;
    vector<int>arr;
    arr.resize(count);
    for ( i = 0; i <arr.size(); i++)
       { arr[i]=i;
        sum+=arr[i];
       }
    cout<<"number of elements are: "<<count<<endl;
    cout<<"sum of array is: "<<sum<<endl;
    return 0;
    


}