/*Structure Pointer
*/

#include<stdio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};

int main()
{
    struct book b1;
    struct book *p;//book type pointer
    p=&b1;
    b1.bookid=100 //Correct
    *p.price=120.0; //Error:by the way line is correct *p me p ki dereferencing ho ke b1 an jayega and it becomes from " *p.price to b1.price " .but there is a catch.As we know priority of .(dot operator) is more then *(dereferencing opetaror) so *p.price means here will be *(p.price) means dereference is applying on the price and price is not a pointer var so you cant dereference it.this is why it will give error.so you can write it like (*p).price. in this case *p will be resolves first and becomes b1 and then b1.price will be accessed whih is write.


    //if you forget to write like (*p).price then it will give error there is another way to write it.but (*p).price is not the professional way to access structure variable using pointer

    //so there is a different operator is there which is used whenever we want to access the structure variable using pointer. instead of writing (*p).prince  write it like p->price=120l; this is the professional way to write this.this is straightforwardly using one single operator and our task is done so use it.


        // structureVariable.memberVariable
        // structurePointer->membervariable


    //NOTE: method of accissing member variable using structurePointer (->) is useed alot in c and c++ both so revise it properly
}