/*DMA & MEMORY LEAK IN C
1.this is extemely inportant topic  fro dynamic programming.

2. memory structure in ram for a program

                    heap {DMA}


                    stack {SMA}

              
              global & static variable


                    instructions

3.local variable of program will get memory in "STACK" part and dynamically allocated variable will get memory in the "HEAP" section.


4. SMA    VS   DMA

(a)SMA---->
___________
-static memory allocation

-all variable we have made till now which is like(primitive or non primitive) int,float,char,double,array,structure variable, pointer variable belongs to  static variable .we are creating these variable using decalration statement and these all are created via static memory allocation

-sma type variable has some name

-we use declaration statements to create sma type variable for compiler and before running the program at the time of compilation the compiler collect and knows all the information about variable that how many variable are there and what type of var they are,scope,lifetime of var etc


(b)DMA---->
____________
-dynamic memory allocation 

-they use predefined functions like-->
            malloc();
            calloc();
            free();

-we use DMA variable to create variable during the run time of a program because we may need some variable or user input which is not fixed size tha how much data user want to give.......so  during execution of the program we create those variable as per our need.and also we cant reserve unlimited memory in adcance using sma variable wich we will use in future so DMA is also useful to save memory and make program effecient.we will be just reserving the exact amount of memory as much we need, not extra not less just exact.

-when we ask user during execution that how many input you want to enter then it can be....1,2,3,4,5...anything so we will be able to do it and be able to handle that unexpected situation.

-so in DMA we are not creating variables using decalration statement we are creating them using the action statements (means functions like malloc and calloc) and this is why compiler doesnt know about them.

-DMA variables do not have a name.and they are created at run time.

-they dont have name then how you would access them???we will access them using pointers.so without pointer you cant study DMA topic.as dma has no name the pointer is the only way to access that memory block reserves by malloc.

 malloc(size of variable)----->
________________

                        float *p;
                        p=(float*)malloc(4);

-here malloc is creating 4 byte of memory and storing the address of the first block of thet memory location.

-but in DMA we can spacify that, for what type of variable you are reserving memory this like int or floa etc. this is why malloc returns the void* means we dont know the returning address belongs to which type of data.so what could be the defination of the predefined malloc function??

                    void* malloc(int s)
                    {
                        return address;
                    }
-void* will handle the unknown data type problem in malloc.

- focus on these two lines now....again--->

                     float *p;
                    p=(float*)malloc(4); 

same for int--->      int*p;
                    p=(int*)malloc(4);

    when malloc will return address it doesnot know what type of data will receive that address.we know a pointer var. will receive that address but to receive the address of unknown data type block we also need to create the pointer of void* type and then we wiill need to type cast that void* so that we can use that address for our desired data type.so we do the typecasting during the creating memory block using malloc function--->   (float*)malloc(4)
   
    so that we dont need to make pointer of void* type and do the typecasting later.we just perform type casting during creation of the memory block using malloc.and we can make pointer of that type we need like  --->(float *)  this is type casting


-using if else you can decide if the condition meets the requirement then decide weather you want to create variable dynamically or not.



calloc(no. of variable,size of variable)---->
____________________________________________
-malloc had only one argument malloc(size of variable) but calloc has two arguments calloc(no.of variabl,size of variable)

-we can create an array using calloc...but ya we can do the same using malloc too.

                int *p;
                p=(int*)calloc(5,4)   //4 bytes ke 5 block ka array


same thing 4 bytes ke 5 block with malloc??-----?

                int*p;
                p=(int*)malloc(20);

line 92 and 98 will do the same thing .but calloc is little bit more spacific with two arguments.but you can use any one of them both(malloc and calloc) are correct.



malloc vs calloc----->
______________________
1.malloc has one argument which is size of variable and calloc you can pass two argument number and size of variable

2.in malloc the variable created contains by default garbage value but in calloc it contain bydefault 0.

3.malloc creates a single block of memory,calloc creates array of blocks. 

MEMORY LEAK-------->
___________________

-SMA variables life is limited to the function block.but DMA variable exists till the program ends.now se the below function--->

                        void f1()
                        {
                        int*p;
                        p=(int*)malloc(4);
                        ....
                        .......
                        ..........
                        }
                        int main()
                        {
                            f1();
                            return 0;
                        }       


-we have a f1 function here it has a SMA int*p variable and a DMA malloc created variable.so when function call will end the SMA variable int*p will destroyed but malloc variable stays there till the program ends.but variable using malloc is created and also consumint the memory in the program.but the pointer vaiable int*p is deleted when function call ends  because its a SMA variable.now DMA variable still reserving the memory it created but no one is pointing to that memory block.so that memory is in in consumed memory area and can be usable by any variable or the programmer itself(that memory area is blocked and remain unusable).this is called "MEMORY LEAK".

-one more example of memory leak--->

                int*p;
                p=(int*)malloc(4);
                ....
                ......
                ........
                p=(int*)malloc(4);
-in ablove case you are calling malloc two times and assigning it in the same pointer variable p.suppose in first malloc call it wass pointing to a memory address 100 and now in second time it is pointing to memory address 200 to create a new DMA variable.but now no one is pointing to address 100.and address is still in consumed area but no one can access that or free that this is again memory leak.



free() function------>
______________________
-so DMA variable memory release in two conditions
                
                    1.when program ends
                    2.use fee() function
        
-Free() function can only free the memory of DMA type variables only.created using malloc or calloc

-if you dont need that function anymore then use free() function and pass the address of that variable means pass tha pointer variable who is containing the address of that DMA variable and the momory will be free. 

                         {
                        int*p;
                        p=(int*)malloc(4);
                        ....
                        .......
                        ..........
                        free(p);     //it will free memory
                        }
-passing p  in free() doesnot mean that it is releasing the memory of p variable no.it is releasing the memory of that DMA variable whos address is in p pointer.and for your kind of information int*p is the SMA variable you can free the momry of a SMA type variable lol.




-so DMA variable memory release in two conditions
 we know the SMA pointer variable will be deleted after the function ends.so if you need the DMA variable after the function ends...we will return its address and strore it in another pointer variable made outside of that function.example---->
(1)if you need that DMA variable after the fun. ends then ---->

                        int *q;
                        q=f1();  //it will get the address of DMA variable.
                            
                        int*f1()
                        {   int*p;
                            p=(int*)maclloc(4);
                            ...
                            ....
                            ......
                            return p;
                        }
(2) if you dont need that DMA then free() that memory--->

                        {
                        int*p;
                        p=(int*)malloc(4);
                        ....
                        .......
                        ..........
                        free(p);     //it will free memory
                        }

realloc(pointer,new_size) function------>
_________________________________________
1.as we know we can create a DMA variable useing malloc or calloc and later we realised that we need to increase or decrease the size of that variable then in that case realloc() function we use.

                    realloc(pointer,new_seize)

 -we will pass the pointer which already pointing  towards a memory address which was assigned to it using malloc or calloc.and we will give new_size to it weather it is increased or decreased size .
 
 -we are changing the size of the variable which we created using malloc and calloc
 example program------>

 
 
                        int*p
                        p=(int*)malloc(20);

                        p=realloc(p,40);

-realloc function will resize the size of our variable and return its address from where we called it

-we will use it more often in data structre.in data structure we will use it more frequently so this is important.




*/                          

