//Bubble Sort
#include<stdio.h>
int main()
{
	int i,j,arr[20],n,temp;
	printf("enter the space of array");
	scanf("%d",&n);
	printf("enter the elements of the aray");
	for(i=0;i<=n-1;i++)
	scanf("%d",&arr[i]);
	printf ("sorted elements are");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
      		{
				if(arr[j]>arr[j+1])
	         {
				 	temp=arr[j];
	         	arr[j]=arr[j+1];
	         	arr[j+1]=temp;
	     	 }

      		}   
	}
		printf("the sorted elements are" );
	for(i=0;i<=n-1;i++)
	printf("\n %d",arr[i]);
}
//we use j loop till n-1-i because of two reasons :
//1)if there are 10 elements(i=n-1) then swapping will be done 9 times(j=n-1-i)(the swapping with the element at ith index)
//2) j<n-1-i reduces the time consumption because if you keep j<n-1 its OK but the swapping will be done througout till last but by keeping j<n-1-i for every increasing loop of i the j will be reduced which will do swapping till that reduced number only and will save time.
