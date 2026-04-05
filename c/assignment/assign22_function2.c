// TSRS factorial of a number
// #include<stdio.h>
// int Factorial(int n)
// {   int i=1,fact=1;
//     for(i;i<=n;i++)
//         fact=fact*i;
//     return fact;
// }
// int main()
// {   int f;
//     f=Factorial(4);
//     printf("%d",f);
//     return 0;
// }   



// TSRS calculate the number of combination one can make from n items and r selected at a time 

#include <stdio.h>


// Using double for better precision with large products
double fact(int n) {
    double f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

// Combinations formula: n! / ((n-r)! * r!)
float combo(int n, int r) {
    return fact(n) / (fact(n - r) * fact(r));
}

int main() {
    // Note: r should generally be an int for combinations
    printf("%.2f", combo(12, 2)); 
    return 0;
}






// TSRS calculate the number of arrangement  one can make form n and r selected at a time





// TSRS check if given number contain given number or not





// TSRN write a func which print all prime factor of a given number.if the num is 36 it should print 2,2,3,3