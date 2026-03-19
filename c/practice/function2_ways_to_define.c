/*ways to define functions
______________________________
1.take nothing,return nothing
2.take something,return nothing
3.take nothing,return something
4.take something,return something
*/


// 1.take nothing,return nothing 
// #include<stdio.h>
// void add()
// {
//     int a,b,c;
//     printf("Enter two numbers:");
//     scanf("%d%d",&a,&b);
//     c=a+b;  
//     printf("Sum is %d",c);
// }
// int main()
// {   int x=10,y=20;
//     add();
//     return 0;
// }




// 2.take something,return nothing
// #include<stdio.h>
// void add(int a,int b) //formal arguments or parameters
// /*local variables a and b are created in add .*/
// //add fun. is accessing the values of x and y through a and b respectively.not accessing x and y directly because they are local to main and not global variables.
// {
//     int c;
//     c=a+b;  
//     printf("Sum is %d",c);
// }
// int main()
// {   int x=10,y=20;
//     add(x,y);//actual arguments or parameters
//     return 0;
// }





// 3.take nothing,return something
// once return 0; statement execute function will terminate
// return keyword can return only one value not more than that

// #include<stdio.h>
// int add()
// {
//     int a,b,c;
//     printf("Enter two numbers:");
//     scanf("%d%d",&a,&b);
//     c=a+b;  
//     return c;
// }
// int main()
// {   
//     printf("%d",add());
//     return 0;
// }








// 4.take something,return something
// #include<stdio.h>
// int add(int a,int b) //formal arguments or parameters
// {
//     int c;
//     c=a+b;  
//     return c;
// }
// int main()
// {   int x=10,y=20;
//     printf("%d",add(x,y));//actual arguments or parameters
//     return 0;
// }