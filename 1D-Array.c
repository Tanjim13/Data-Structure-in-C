#include <stdio.h>


int main()
{
	int A[1000],size,i;

	printf("Size of integer datatype: %lu",sizeof(int));

	printf("\nENTER THE Array SIZE\n");
	scanf("%d",&size);
	printf("\n Enter Array Elements:\n");

	for(i=0;i<size;i++)
	{
		scanf("%d",&A[i]);
	}
	
	printf("\nIndex   -   Address -  Value\n");
	for (int i = 0; i < size; i++)
	{
		printf("\n %d  - %u -  %d",i,&A[i],A[i]);

	}

	return 0;
	
}
