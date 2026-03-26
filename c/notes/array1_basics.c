/*ARRAY*/

/*

- array is lenier collection of similar elements(type shoud be same)
-array is a group of variable
-stores multiple values under single name 
-also known  as subscript variable
-when we declare array like int a[100] then this 100 is not the index. it shows the total number of variables in the array.
- [ ] is called subscript operator.value put into  these [ ] called subscript value.....it is similar to maths like x1,x2,x2...so on.
-a[0] so a and 0 is operand and [ ] is operator.we can write variable in the place of operand. like a[i] i is a variable
- int a[] cant be empty at declaration time
-int a[i] i can be only natural number.i here represent total element in the array during declaration.i is not an index during array declaration
-any size of array will consume memory in sequencial manner
-if you dont initialize local array it will contain garbage value and if it is global it will contain by default 0.
-we can initialize array during delaration like int a[5]={1,2,3,4,5};
-if you initialize array  with more values than you decalare then it will give error.int a[5]={1,2,3,4,5,6,7,8} will give ERROR
-if you initialize with lesser values with same time when you are doing decalration values like int a[5]={1,2} then on the remaining positions will be filled with 0 automatically.
-but if you declare first like int a[5] 
-and initialize leater with lesser value then remaint indexes wont be containg 0 automatically. it will contain garbage value. you will have assign 0 to them manually
-during declaration you can leave [ ] empty only when you initialize array at the same time like int a[]={1,2,3,4,5,6} compiler will count the values and consider the size of array.

**********************************
-BOUND CHECKING vs ILLEAL MEMORY ACCESS---->>
    no bound checking in c and c++ both.int a[2]={1,2,3,4,45,5} will give error because items are more thn declaration but if you do it later in a loop like->
    
    int i,a[2];
    for(i=0;i<=9;i++)
        scan("%d",&a[i])

    this will store 9 items in the memory in sequencial manner but only 0,1,2 index will be reserved for you out of 10 index and other 7 element out of 10 will be stored there in the memory but they dont belong to you array a[2]'s space & it is accessing memory illegally which is called illegal memory access in c&c++ language.so dont do that because compiler wont give any error and program will also run. it can terminate the program abnormally or can behave abnormally.so make sure how many element you declare in the array same or lesser value should be assign to them not more than that.
*/

// *****************************************
//simple average program



// #include<stdio.h>
// int main()
// {//we are creating 10 var by writing int a[10] without making 10 different variable.

//     int a[10],i,sum=0;
//     float avg;
//     printf("Enrter 10 numbers");
//     for(i=0;i<=9;i++)
//         scanf("%d",&a[i]);
//     for(i=0;i<=9;i++)
//         sum=sum+a[i];
//     avg=sum/10.0;
//     printf("avg is %f",avg);
//     return 0;

// }   


//you may think that int a[100] will create 100 var at once but input must be given by pressing 100 keys on keyboard but we also can give 100 var by passing a file which can be read by program using read/write operation



****************************************

// Function call  by passing array

int main()
{
    int a[10];
    input(a,10);
// input(a,10) means a is array and 10 is size passing in input function
// function me array pass krna ho to just pass its name like a.thats it
}
void input(int b[],int n)
// int b[] will receive complete array a and int n will take size of array which is 10 here
//receive krne ke liye hame ek array declare krna hoga like int b[]. b[] empty hai becase a me jitne bhi items ho wo b me aa sake limitation na ho koi.
{
    int i;
    printf("Enter %d numbers",n);
    for(i=0;i<n;i++)
        scan("%d",&b[i]);
}


// in above example we are passinf "array a" in  array "int b[]" we are not creating new array b[] is just another name of a[]....we are just passing a in b.because we can access array a in other function direcly so we are passing it using function call.