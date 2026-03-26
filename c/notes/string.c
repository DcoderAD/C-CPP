//STRINGS

/*
___________
- string is a sequence of character terminates at null character.it behaves like full stop for the string so it is important


- string in c language handelled using char array {as we know string me multiple character hote hai but the have some meaning and we want to handle them as one unit like 'udaipur' this is why we use char array to handle string in c}

-char string[10] me udaipur store krne par 7 blocks use ho rhe hai but remaining 3 me 0 store hoga for null character.null character wont print on the screen.its not a visible character

- 0 is ascii code for null character('\0') 

- how we will end the loop in the case of an array.so in the for loop we will give condition like when '\0' the null character arrives the loop will end because where null char comes string ends but how we write this??? 
    like this-->   i<'\0' no its wrong
null char will be found in the char array index
so  condition inloop will be like ---->
=========>>>    str[i]!='\0'    :correct 
our loop will run till above condition
*/


// ***********************************************
// #include<stdio.h>
// int p1()
// {
//     char string[10]={'u','d','a','i','p','u','r'}; //each cahr ka ascii code wil store in the variable.udaipur will take 7 blocks only out of 10.remaining empty blocks me 0 store hoga.

//                             // or
//     char string[10]={'u','d','a','i','p','u','r','\0','\0','\0'}; //null likh skte hai empty blocks ke liye.& na like to automatically assigned null character
//     int i;
//     for(i=0;i<=9;i++)
//         printf("%c",string[i]);
//     return 0;
// }
// ***********************************************





#include<stdio.h>
int p2()
{   int i;
    char string[10]={'u','d','a','i','p','u','r'};
    
    for(i=0;string[i]!='\0';i++)
        printf("%c",string[i]);
    return 0;
} 



#include<stdio.h>
int p3()
{   int i;
    char string[10]={'u','d','a','i','p','u','r'};
    
    for(i=0;string[i]!=0;i++)//can take ascii code of null which is 0
        printf("%c",string[i]);
    return 0;
} 




#include<stdio.h>
int p4()
{   int i;
    char string[10]={'u','d','a','i','p','u','r'};
    
    for(i=0;string[i];i++)//only string[i] will do the work when string will end string[i] will become 0 and condition becomes false.loop breaks
        printf("%c",string[i]);
    return 0;
} 



// SPECIAL WAY TO PRINT STRING=====>>> %S
//  we will use %s format spacifire which print entire string at once & we just need to give the name of string. {we dont need "int i" variable or a "for loop" in this case here}
//but this method is only usefull when you need to print the string.

#include<stdio.h>
int p5()
{  
    char string[10]={'u','d','a','i','p','u','r'};
        printf("%s",string);
    return 0;
} 



// if we can print useing %s then what is the use of loop???
// ====>> %s is usefull when you want to print the string.but if you want to traverse each character of the string and want to perform some operataion on them according to the requirement of given programming problm then you will need the loop way and %c and int i var ......so both ways are usefull in perticulat situation.


#include<stdio.h>
int p6()
{  
    char string[10]="udaipur";//can give string in "" no need to write each char saperately
        printf("%s",string);
    return 0;
} 


// write a programm to claculate the length of a string 

int p7()
{  
    char string[10]="udaipur";
    int i;
    for(i=0;string[i];i++);
    printf("length id %s is %d",string,i);
    return 0;
} 
// **************************************************


//String Constant(String Literal)
// anything written in double quotes is string constant



