// generalized star pattern:
#include<stdio.h>
int main()
{
    int i,j,row,k=1,s=0;
    printf("how many rows you want?");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {    for(j=1;j<=2*row-1;j++)
            {
            if(j>=row+1-i && j<=row-1+i)
                printf("%d",k);
            else    
                printf("%d",s);
            }
            printf("\n");
    }
}