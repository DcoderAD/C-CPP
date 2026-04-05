/*UNION
-Union is just like structure,use to create custom data type

-Syntax is also similar except we write union in the place of structure keyword

                        union bool
                        {
                            int a;
                            float b;
                        };

-but difference btw structure and union is structure variable will get memory the total memory of its member variable but in union a single union variable will get the memory equal to the maximum sized member variable.and if there are "int a" and "float b" variable are in union book then bigger is float b and the union variables size will be "8-byte" {equal to float}.so now a union variable is of size of 8 byte and this 8 byte block can be used to store boh int a and float b both member variable/ 
 

struct book
{
    int a;
    float b;
}x1;

union book
{
    int a;
    float b;
}x1;

-in struct and union we can access and assign values to the member variable using the same stye like x1.a=4 or x1.b=5   but in structure variale we can assign values to all the member variables at once but there is problem with union variable---->  
                    union book
                    {
                        int a;
                        float b;
                    }x1;
                    
                    x1.a=4;
                    x1.b=5.
now x1 is a 8 byte memory union variable.when we assign x1.a=4 int reserve 4 byte out of 8byte .and then when we assign x1.b=5;  b is float type and it requires all 8 byte memory so it will overright the value of a variable and take all 8 bytes for float.so in the case of union we can only one varible at a time not more thatn that .but we see in struct we can use all the variable at once no problem is there.


-so when we use union???????
-whenever we just need to access single  element at once then use union.we use union specially in low level programming where are strict memeory constraints availabel...or ebedded programming
-for example suppose we have two devices d1 and d2 and d1 sends 2byte signal and d2 sends 4byte signal but at once only one device only will send signal not both in that case we can use union data type.it is not a good idea to create 2 variables of 2bytes and 4 bytes .it is better use union and make one single variable which can receive both data of d1 and d2.

*/