#include <stdio.h>
#include <malloc.h>

int main()
{
	int *a = (int*)malloc(10 * sizeof(int));
	int indexer = 0;

	for ( indexer = 0; indexer < 10; indexer++)
	{
		*(a + indexer) = indexer;
	}

	a = (int*)realloc(a,5 * sizeof(int));



	for ( indexer = 0; indexer < 5; indexer++)
	{
		printf("%d ", *(a + indexer));
	}
	return 0;
}