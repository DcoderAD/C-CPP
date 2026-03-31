/*
 MEMORY CONCEPT AND STRING FUNCTIONS
 ___________________________________________

-this is important for pointers too.
-when we use for loop to print the string we access each element one by one by its index pass in str[i] but when we use %s & str the we are just giving the char array name and it represent the address of first character of the string and by simple calculation it can count further character till the null character arrives.

-str is as good as &str[0]

-  str~&str[0]
-one more thing when we just pass first character's address then we can access the whole string.and if you just pass first character of the string then you can just access that perticular character

*/

// #include<stdio.h>
// int a1()
// {
//     char str[10]='udaipur'
//     int i=0
//     for ( i ; str[i] ; i++)
//         printf("%c",str[i]);
//     printf("%s",str); why we are not using loop here and why we just use the name of array only?? lets learn in memory concept here.
//     return 0;
    
// }


// -if you want to just calculate the length of the string the use this logic of  2 lines of code-----> 
            // for(i=0;str[i];i++);
            // printf("%d",str[i]);

//there is predefined function called strlen() you can use to calculate the length of the string.

// #include<stdio.h>
// #include<string.h>
// int p1()
// {
//     char str[20]="udaipur";
//     int len;
//     len=strlen(str);//just pass the name of array in strlen function and also dont forget  to add <string.h> header file to include declaration
//     printf("%s--%d",str,len);
//     return 0;
// }



// - strlen() function??
   - it calculate the length of a string
    // int strlen_fun(char*); 
    // char* pointer means address pass hoga we will learn pointer in pointer topic.



//strcpy() function???
//it copies one string to another
// -there is one more predefined function which takes address and  returns string address.this is very inportant function c.you can pass this strcpy function in strlen() function to calculate the length of string
    // char* strcpy(char*,char*);
    

//you can pass this strcpy function in strlen() function to calculate the length of string--->    strlen(strcpy(s,str));



// IMP=====>>
//format of  strcpy() function---->
// strcpy(jisme_strore_krna_hai_wo_string, jisko_store_krna_hai_wo_sring)

//we are making a programm  where we are copying our char str in other string-->
   




// #include<stdio.h>
// #include<string.h>
// int a2()
// {
//     char str[20]="udaipur";
//     char s[20];
//     int len;
//     // s=str;       //Error: str means address and we cant assign anything in address
//     // s[10]=str[10];//Error: array ban jane ke bbad  [ ] me jo likha hai wo index hai na ki array ka size
//     //use strcpy()function to copy one array into other.
//      len=strlen(strcpy(s,str)); // strcpy se str s me copy ho jayega {char* strcpy(char*,char*);} and address return krega. ye address strcpy() me pass kr rhe hai esa isliye ho pa raha hai kyuki strlen() address receive krta hai{ int strlen_fun(char*); }
//      and int strlen_fun(char*); 
//      printf("\n%s---%s \n%d\n",str,s,len); // output:udaipur---udaipur.
//     return 0;
// }






//strcmp() function compare two string and tell us weather they are same or not.
            // int strcmp(char*,char*);


#include<stdio.h>
#include<string.h>
int main()
{
    char str1[12]="rahul";
    char str2[12]="ram";
    int comp;
    comp=strcmp(str1,str2); //it may give negative answere.it compare each a;phabate of two string according to the dictionaary  
    printf("%d",comp);//output:-5 means str1 dict me str2 se pahle aayega 
    return 0;
}
//if output is 0 means both strings are same
//if negative output means both strings are in dictionry order
//if positive output means both strings are in dict order


// char str1[12]="ram";
//     char str2[12]="ramesh";
//     int comp;//ram ramesh se pahle aayega
//     comp=strcmp(str1,str2) str1,str2 shi orter me hai to - me ans aayega nahi to + me{it can give answere like -101 and so on so dont panic}


//strcat() function??
//char* strcat(char*,char*)
//it concatinates the two strings