#include <stdio.h>
void Lsearch(int arr[],int size,int key)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			printf("Element found at position %d\n", i+1);
			return;
		}
	}
	printf("Element not found !\n");
}
int main()
{
	int arr[100], size;
	printf("Enter size of the array: \n");
	scanf("%d", &size);

	printf("Enter Array Elements: \n");

	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter element to be searched: \n");
	int key;
	scanf("%d",&key);

	Lsearch(arr, size,key);
}