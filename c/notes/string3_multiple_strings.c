/*Multiple strings
_______________________
//how to input or store multiple strings from the user?
char str[10]; contains single string
use 2d array to contain multiple strings in single char array
chr cities[4][10];-->4cities with 10 characters limit name
*/

#include<stdio.h>   
int p1()
{  
    int i;
    char cities[4][15]={"udaipur","bhopal","chittorgarh","pune"};
    for(i=0;i<=3;i++)
    {
        printf("%s\n",cities[i]);
    }
    return 0;

}
//in above code limited cities name can be antered, if user want to enter as much names as the want then we need to study DMA topic.Dynamic memory allocation.





//multiple string input from user

#include<stdio.h>   
#include<string.h>
int main()
{  
    int i,j,count=0,l;
    char cities[4][15];
    printf("Enter 4 cities name");
    for(i=0;i<=3;i++)
    {
        fgets(cities[i],15,stdin);
        l=strlen(cities[i]);
        if(cities[i][l-1]=='\n')
            cities[i][l-i]='\0';
    }//count a occurance in all cities
    for(i=0;i<=3;i++)
        {   for(j=0;cities[i][j];j++)
                if(cities[i][j]=='a')
                    count++;
        }
    printf( "%d",count);
    return 0;

}