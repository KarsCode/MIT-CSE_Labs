#include<stdio.h>
int main()
{
	int arr[100][100];
	int r,c;

	printf("Enter Rows and Columns of Matrix: \n");
	scanf("%d%d",&r,&c);

	printf("Enter elements of matrix :\n ");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}


	int zero=0;

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(arr[i][j]==0)
				zero++;
		}
	}

	if(zero>((r*c)-zero))
		printf("Sparse Matrix\n");
	else
		printf("Not a Sparse Matrix\n");
}