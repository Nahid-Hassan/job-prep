#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Enter the number of elements: ");
	int count, sum = 0, i;
	scanf("%d", &count);

	int *arr = (int*) malloc (sizeof(int) * count);  // malloc(total bytes)
	for (i = 0; i < count; i++) {
		arr[i] = i;
		sum += arr[i];
	}

	printf("Array sum = %d\n", sum);

	return 0;
}
