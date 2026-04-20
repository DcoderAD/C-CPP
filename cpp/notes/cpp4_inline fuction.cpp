/*Inline functions
___________________
-inline is a keyword.this concept belongs to c++ and was not in c but not c also have this concept of inline function.
-we know there are many beni benifits of making functions but there is a benifit related memory which is inline function.
-there is benifit of making making a saperate function we can save memory.if a function is large and taking too much memory. it comes into ram when it is called and after execution it goes out of ram.so it will take a little time for execution.
-there is a con of making function too.when we call a function from another function then it pause and store  current execution status situation in register and memory for further steps and call another function and load its variable and execute it then again it goes to previous line of execution and load that stored status.so basically in switching(pause,store,load) these functions waste time of the system.how many time we call the functions it takes little more time and increase the execution time of our program.
-think if you write that large code in the main() function then it will stay in the ram till the end of the program. 
-a program which takes less memory and consume less time considered good program.but we cant save both at the same time.if you save memory then time will be more and if you save time it will take more memory.lets understand it usinng example....
-if we dont make any function and write all the code in the main() function then it will run faster but it will stays in the memory till the end of the program so memory consumoption will be greater and time will be saved.
-if we create saperate function for every task it will only comes in the memory when it will be called so it will save memory because it wont stays in the memory the whole time.but when we call functions again and again in the switching of these functions it will waste time.in this case we save some memory but time consumption was greater.
-what is we can save time and memory both ??? what if there is a middle way where we can balance btw time and memory???? use inline function.
-suppose we have some function.we make it inline.then during the execution compiler will consider like its written in the main function.its like you are copying that function in the main() during execution  time.so it takes less time.and also wont stay in the memory till the end.
-if a function takes a lot of memory then let it be a function so we can save alot of memory by not writing it in the main() function area.
-but samaller functions which does not take so much of memory but when we call them they waste so much time in to switching process we can make them inline function.
-by making samller function  inline what compiler does that it copy the code of that smaller function...at the place from where they were called.means it does not behave like a saperate function and behave like its code was written at that place from where it was called.then we can save the time which was wasting in the function call  and switching time.
but why cant we directly write the code of those smaller fucntions at the place where we call them???  --->because then we wont be able to avail the benifits of making functions like easy readebility, debugging, modular program.so we use inline function to save time and also not losing the benifit of making function at the same time.best of both world.
-how do we make a  function inline???
 so we use inline keyword when we declare a function
-but making a function inline is a request to compile that where  ever this functions is called just expand the code of this function in one line at the place of function call.but compiler may decline your request too.its a request not the order. if there are  certain situations in you function  like  loops,recursion,switch casem,function with static variable....then compiler can decline your request for making that function inline.
-mostly compiler will decline those functions which takes a lot of memory in the ram.and consider samller functions for inline requeset.which can same some time of system. 

*/


// #include<iostream>
// using namespace std;

// inline int add(int,int);  //making func.inline
// int main()
// {
//     int r=add(2,4); 
//     cout<<"result is "<<r;
// }
// int add(int a,int b)
// {
//     return a+b;
// }





//below you can see the time difference with inline and without inline
#include <iostream>
#include <chrono> // For high-resolution timing

using namespace std;

// Try with and without 'inline'
inline int add(int a, int b) {
    return a + b;
}

int main() {
    auto start = chrono::high_resolution_clock::now();

    int r = 0;
    for (int i = 0; i < 100000000; i++) {
        r = add(i, i + 1);
    }

    auto end = chrono::high_resolution_clock::now();
    
    // Calculate duration
    chrono::duration<double> diff = end - start;

    cout << "Result: " << r << endl;
    cout << "Time taken: " << diff.count() << " seconds" << endl;

    return 0;
}