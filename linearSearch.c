/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,data,a[100];
    printf("Enter number of element:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Elements are:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d", a[i]);
    }
    printf("\nEnter Elements for searching:");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
        if(data==a[i])
        {
            printf("Elements is present at position:%d",i);
            
        }
    }
    if(i==n)
    {
        printf("Elements is not fond");
    }
    
}

