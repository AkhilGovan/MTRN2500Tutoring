#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size = 0;
	scanf("%d", &size);

	// allocate memory for an array of integers
	int* p = (int*)malloc(size * sizeof(int));

	// deallocate the memory
	free(p);
}
