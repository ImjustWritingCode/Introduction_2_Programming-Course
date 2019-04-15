#include<stdio.h>
void print_tree(int a[], int index, int max)
{
	if(2 * index < max)
		print_tree(a, 2 * index, max);
	if(index == max - 1)
		printf("%d\n", a[index]);
	else
		printf("%d ", a[index]);
	if(2 * index + 1 < max)
		print_tree(a, 2 * index + 1, max);
}
int main(void)
{
	int n;
	int i;
	while(scanf("%d", &n) != EOF){
		int arr[n+1];
		for(i = 1;i < n+1;i++)
			scanf("%d", &arr[i]);
		print_tree(arr, 1, n+1);
	}
	return 0;
}