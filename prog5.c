//Search an element in the array using binary search
#include<stdio.h>
int main()
{
	int a[50],n,item,loc,mid,end,beg,i;
	printf("\n Enter the size of the array :");
	scanf("%d",&n);
	printf("Enter the elements of the array in sorted order :");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n Enter the element to be sarched :");
	scanf("%d",&item);
	
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	while(beg<=end)
	{
		if(item<a[mid])
		{
			end=mid-1;
		}
		else
		
			beg=mid+1;
			mid=(beg+end)/2;
		
	}
	if(a[mid]==item)
	{
		loc=mid+1;
		printf("\n Item found at position %d",loc);
	}
	else printf("\n Item not found");
	   
	return 0;
}
	
