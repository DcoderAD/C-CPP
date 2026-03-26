/*go to control*/
/*in modern C++ goto is not recomanded so dont use it.it is not a good practice*/
#include<stdio.h>
int main()
{   int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("1\n");
    
    if (x>0)
        goto l1;
    printf("2\n");
    goto l2;
    printf("3\n");
    l1:/*this is lebal*/
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    l2:
    printf("8\n");
    if (x<0)
        goto l1; /*use condition otherwise it will be endless*/
}

// we can use goto with some if else condition
//goto can go forward and bacword in the program lines.so use use condition to control it otherwise it can run forever.
//sam "goto l1" or "goto l2" can be many times in the program but the lebal name cant be same they musy be unique like l1,l2,l3,l4,,,,,,,,,,


    