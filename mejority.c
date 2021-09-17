#include<stdio.h>
int main()
{
    int a[]={3,3,4,2,4,4,2,4,4};
    int i,j,max=0,index=-1;
    for(i=0;i<8;i++)
    { int count=0;
        for(j=0;j<=8;j++)
        {    //count=0;
        if(a[i]==a[j])
        {
		
            count++;
           // printf("%d ",count);
       }
      // printf("%d ",);
        }
        if(count>max)
        {
        	max=count;
        	index=i;
		}
    }
    if (max > 4)
        printf("%d ",a[index]);
 
    else
        printf("No Majority Element" );
}

