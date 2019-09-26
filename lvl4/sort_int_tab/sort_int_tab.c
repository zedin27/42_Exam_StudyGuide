void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	if (size == 0)
		return ;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
		}
	}
}
// #include <stdio.h>
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i=0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }
//
// int main()
// {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     sort_int_tab(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }
