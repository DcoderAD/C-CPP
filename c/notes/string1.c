// STRINGS

/*
___________
- string is a sequence of character terminates at null character.it behaves like full stop for the string so it is important


- string in c language handelled using char array {as we know string me multiple character hote hai but they have some meaning and we want to handle them as one unit which has meaning like 'udaipur' this is why we use char array to handle string in c}

-char string[10] me udaipur store krne par 8 blocks use ho rhe hai{7 for udaipur and 1 for \0 null character} but remaining 2 me 0 store hoga for null character.null character won't print on the screen.its not a visible character.

- 0 is ascii code for null character('\0')

- how we will end the loop in the case of an array.so in the for loop we will give condition like when '\0' the null character arrives the loop will end because where null char comes string ends but how we write this???
    like this-->   i<'\0' no its wrong
null char will be found in the char array index
so  condition in loop will write it using char array index ---->
=========>>>    str[i]!='\0'    :correct
our loop will run till above condition
*/

// ***********************************************
// #include<stdio.h>
// int p1()
// {
//     char string[10]={'u','d','a','i','p','u','r'}; //each cahr ka ascii code will store in the variable.udaipur will take 7 blocks only out of 10 and one will be for null character after udaipur.remaining empty blocks me automatic 0 store hoga.

//                             // or
//     char string[10]={'u','d','a','i','p','u','r','\0','\0','\0'}; //null likh skte hai empty blocks ke liye.& na like to automatically assigned null character
//     int i;
//     for(i=0;i<=9;i++)
//         printf("%c",string[i]);
//     return 0;
// }
// ***********************************************

#include <stdio.h>
int p2()
{
    int i;
    char string[10] = {'u', 'd', 'a', 'i', 'p', 'u', 'r'};

    for (i = 0; string[i] != '\0'; i++)//taking \0 null char in the condition
        printf("%c", string[i]);
    return 0;
}

#include <stdio.h>
int p3()
{
    int i;
    char string[10] = {'u', 'd', 'a', 'i', 'p', 'u', 'r'};

    for (i = 0; string[i] != 0; i++) // can take ascii code of null which is 0
        printf("%c", string[i]);
    return 0;
}

#include <stdio.h>
int p4()
{
    int i;
    char string[10] = {'u', 'd', 'a', 'i', 'p', 'u', 'r'};

    for (i = 0; string[i]; i++) // only string[i] will do the work when string will end string[i] will become 0 and condition becomes false.loop breaks
        printf("%c", string[i]);
    return 0;
}

// SPECIAL WAY TO PRINT STRING=====>>> %S

//  we will use %s format spacifire which print entire string at once & we just need to give the name of string. {we dont need "int i" variable or a "for loop" in this case here}
// but this method is only usefull when you need to print the string.
// %s method is also usefull to take string input from user.here we dont need loop or additional variables so use it for user input in string case.  
#include <stdio.h>
int p5()
{
    char string[10] = {'u', 'd', 'a', 'i', 'p', 'u', 'r'};
    printf("%s", string);
    return 0;
}

// if we can print useing %s then what is the use of loop???
// ====>> %s is usefull when you want to print the string.but if you want to traverse each character of the string and want to perform some operataion on them according to the requirement of given programming problm then you will need the loop way and %c and int i var ......so both ways are usefull in perticulat situation.

#include <stdio.h>
int p6()
{
    char string[10] = "udaipur"; // can give string in "" no need to write each char saperately
    printf("%s", string);
    return 0;
}

// write a programm to claculate the length of a string

int p7()
{
    char string[10] = "udaipur";
    int i;
    for (i = 0; string[i]; i++)
        ;
    printf("length id %s is %d", string, i);
    return 0;
}
// **************************************************

// String Constant(String Literal)
//  anything written in double quotes is string constant

// taking input from user in string--->

int p8()
{
    char string[30]; // we dont know what length user will input so take safer size of char array
    int i;
    printf("Enter your name");
    scanf("%s",string); //no & why??? read below notes
    printf("%s",string);
    return 0;
    //no & why?? becase name of array itself presents the address of the initial index of the array.and if you want & then write &string[0].

    //this method -->scanf("%s", string); is also not completly correct because it will take 'ajay' but it wont take 'ajay sharma' as soon as you give space it will break the string {it consider space as delimiter}.

    //scanf delemeter pattern pe data input leta hai{means data entered using keyboard will go first in a buffer like some char buffer and then data picked up by scanf}

    //as we use %s or any format spacifires it converets the input into that format and this is the work of scanf....scanf take input in sequence and it know when user uses any delimeter like "space,tab,enter" it understands that string has end.this is whay in 'ajay sharma' the space after ajay will be concidered as string input end and it will print only ajay not ajay sharma
   
   
    /* 
     NOTE ABOUT scanf():
         SCANF CAN ONLY TAKE INPUt OF SINGLE WORD.IT CANT HANDLE MULTIPLE WORD STRING
    */
}


//so what to do for multiple word string input??

//gets()  but this function is now depricated.it will give you warning that using gets() is unsafe so use fgets()

//problem with gets()-->it can can take input more then the declared size of the char array and dont give any error that leads to illegal memory access problem.and program became highly unsafe.gets will give output too and abort the progeam too.so better not to use it.


//so use fgets() its new and safer

//format of fgets function---->it will take 3 parameters 
/*

                        FGETS()

format_of_fgets->    fgets(array_name , allowed_input_limit ,input_from)
example----->>>>     fgets(str,10,stdin)

    stdin means from where you  are taking input which is keybord.so for input from keyboard we will write stdin whos declaration is in header file stdio.h
*/


//use fgets() function  for string input.

//fgets() function is specially made for strings for we dont need format spacifies in it.just give the name of char array you made thats it. 

int p9()
{
    char str[30]; 
    int i;
    printf("Enter your name");
    fgets(str,10,stdin);   //in this 10 , space for null character is include.
    for(i=0;str[i];i++)
        printf("\n%c %d",str[i],str[i]);
    // printf("%s \n",str);
    printf("\n");
    return 0;
}

//when user enter out of limit characterd defined in fgets it will concider the null character (null char ascii is 32)...and if you enter smaller string then limit, it conciders new line character and then it concider the null character and end the string (\n asci is 10). if you want to know how then give two input in above program  1.ajay   2.ajay dhakad and see the difference

//above explained problem is  understandable and problematic. so be alert and do this--->> if there is any newline character before null character then make sure to replace it with the null character. for this first check the length of the string and if last char se pahle newline ho to replace it with null char.

//code of line number 187and 188 will replace that '\n' into '\0' and  our problem is solved.this is the only way in c language it is hard but thats it you can do anything.just write this additional code so problem does not occure .

//we do write these replacement code because if you dont then it can give counting error.

int main()
{
    char str[30]; 
    int i;
    printf("Enter your name");
    fgets(str,10,stdin);   //in this 10 , space for null character is include.
    for(i=0;str[i];i++);
    if (str[i-1]=='\n');//use this to avoid error
        str[i-1]='\0';//use this to avoid error
    printf("%s \n",str);
    printf("\n");
    return 0;
}