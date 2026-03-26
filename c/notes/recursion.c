/*RECURSION*/
/*
-function calling itself is recursion
-it solves probles by calling a simpler version of the same problem
-make sure the recursion terminates at some point using a base case condion or if else.just make sure it doesnt run indefinitely.
-it has a base case and a recursive case
-recursive code is generally shorter and easier then iterative code but it can be less efficient and use more memory due to function call overhead and stack usage.
-in some problems recursion is the most natural way to solve them, such as tree traversal and backtracking algorithms.
-when we will make program we will write the base case first and then the recursive case. this will help us to ensure that our recursion will terminate and we will avoid infinite recursion.
*/

// Q.write a program to calculate sum of first n natural numbers using recursion??

int sum(int n)
{
    if (n==1)   //base case
        return 1;
    return(n+sum(n-1));  //recursive case
}