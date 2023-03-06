#include <stdio.h>
int A,B;
void signe( A , B)
{
	if (A * B > 0)
		printf("A and B same type\n");
	else
		printf("A and B is not the same Type\n");
}

int minimum (A, B)
{
	if (A > B)

		return B;

	else

		return A;
}

int maximum(A, B)
{
	if (A > B)
		
		return A;
	
	else
		
		return B;
}

int main()
{
	printf("Enter A: ");
	scanf("%d",&A);
	printf("Enter B: ");
	scanf("%d",&B);	
	signe(A,B);
	printf("minimum de A et B est : %d\n",minimum(A,B));
	printf("maximum de A et B est : %d\n",maximum(A,B));

}
