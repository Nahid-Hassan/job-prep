#include<stdio.h>

int main()
{
    int arr_size = 5, index, i, j;
    int age[arr_size];

    //array input
    printf("Input 5 elements: ");
    for(i =0; i<arr_size; i++)
        scanf("%d", &age[i]);

    //input zero based index number for deletion
    printf("Input index number (0 to 4): ");
    scanf("%d", &index);

    //deletion by replacing 
    j = index;
    while(j<arr_size-1)
    {
        age[j] = age[j+1];
        j++;
    }

    arr_size = arr_size - 1;

    for(i = 0; i<arr_size; i++)
        printf("%d ", age[i]);

    return 0;
}