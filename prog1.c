//sort a given list of strings
#include<stdio.h>
#include<conio.h>
int main()
{
	char sort[20][50];
	int i,j,n;
	printf("Enter the number of strings to be sorted:");
	scanf("%d",&n);
	printf("Enter the strings to be sorted :");
	for(i=0;i<n;i++)
		scanf("%s",&sort[i]);
	printf("Sorted list of strings are:\n");
	for(i=65;i<123;i++)
	{
		for(j=0;j<n;j++)
		{ 
			if(sort[j][0]==i)
				printf("\n%s",sort[j]);
		}
	}
}
