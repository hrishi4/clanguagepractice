//if you use flag in this concept dont use if(i==5),flag is an alternative of (i==5)
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5],i,num,pos,flag=0;
	printf("\n Enter the values");
	for(i=0;i<5;i++)
    {
		scanf("%d",&arr[i]);
	}
	printf("\n Enter element to search");
	scanf("%d",&num);
	for(i=0;i<5;i++)
	{
		if(arr[i]==num)
		{
			pos=i+1;
		printf("\nthe number found at position %d",pos);
		flag=1;	
		break;
		}
	    
        
}
if(i==5)
//	if(flag==0)
	printf("there is no such number");
}
