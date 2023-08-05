#include <stdio.h>
void MatrixMult(int a[][100], int b[][100], int r1, int r2, int c1, int c2)
{
	printf("Result after multipliaction is: \n");

	int ans[100][100];

	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{	ans[i][j]=0;

		for(int k=0;k<r2;k++)

		{
			ans[i][j]+=a[i][k]*b[k][j];

		}
		printf("%d\t",ans[i][j]);
	}
	printf("\n");
	}

	
}
int main()
{
	int a[100][100],b[100][100],r1,r2,c1,c2;

	printf("Enter rows and columns of matrix 1: \n");
	scanf("%d%d", &r1, &c1);
	printf("Enter rows and columns of matrix 2: \n");
	scanf("%d%d", &r2, &c2);

	if(c1!=r2)
	{
		printf("Matrix Multiplication is not compatible ");
		return 0;
	}



	printf("Enter elements of matrix 1: ");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}


	printf("Enter elements of matrix 2: ");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	MatrixMult(a,b,r1,r2,c1,c2);




	



}