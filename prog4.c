//APPEND 2 ARRAYS
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr1[50],arr2[50],App[100],A,B,i,k;
	printf("Enter the size of first array :");
	scanf("%d",&A);
	printf("\nEnter the %d element to the first array",A);
	for(i=0;i<A;i++)
	{
		scanf("%d",&arr1[i]);
		App[i]=arr1[i];
	}
	k=i;
	printf("\nEnter the size of second array :");
	scanf("%d",&B);
	printf("\nEnter the elemets to the second array :");
	for(i=0;i<B;i++)
	{
		scanf("%d",&arr2[i]);
		App[k]=arr2[i];
		k++;
	}
	printf("\nThe new array after Appending is :");
	for(i=0;i<k;i++)
	    printf("%2d",App[i]);
	return 0;
}
