//IMPLEMENT PATTERN MATCHING ALGORITHM
#include<stdio.h>
#include<string.h>
int main()
{
	int A,B,i,j,flag=0;
	char text[50],pat[50];
	printf("Enter the string :");
	gets(text);
	printf("Enter the pattern to find:");
	gets(pat);
	A=strlen(text);
	B=strlen(pat);
	for(i=0;i<=A-B;i++)
	{
		for(j=0;j<B;j++)
		if(text[i+j]!= pat[j])
			break;
		if(j==B)
		{
		printf("Pattern found at the possition %d\n",i+1);
		flag=1;
	    }
	}
	if(flag==0)
		printf("Pattern not found");
	return 0;
}
