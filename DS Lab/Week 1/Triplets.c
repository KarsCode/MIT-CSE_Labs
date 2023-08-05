#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s,a[100];
	int p=0,n=0;
	printf("Enter Array size: \n");
	scanf("%d", &s);

	printf("Enter Array elements: \n");
	for(int i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>=0)
			p++;
		else
			n++;
	}

	int neg[100], pos[100];
	

	for(int i=0;i<s;i++)
	{
		if(a[i]>=0)
			pos[i]=a[i];
		else
			neg[i]=a[i];
	}

	for(int i=0;i<p;i++)
		printf("%d\t",pos[i]);

	printf("\n");

	for(int i=0;i<n;i++)
		printf("%d\t",neg[i]);



	
	
}