#include<stdio.h>
void swap(int *a, int *b)
{
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
}
int main(void)
{
        int T, i, j, k, n;
        int pos;
        while(scanf("%d", &T) != EOF){
                for(i = 0;i < T;i++){
                        scanf("%d", &n);
                        int arr[n];
                        for(j = 0;j < n;j++)
                                scanf("%d", &arr[j]);
                        for(j = 0;j < n-1;j++){
                                pos = j;
                                for(k = j+1;k < n;k++){
                                        if(arr[k] < arr[pos])
                                                pos = k;
                                }
                                swap(&arr[j], &arr[pos]);
                        }
                        for(j = 0;j < n-1;j++)
                                printf("%d ", arr[j]);
                        printf("%d\n", arr[n-1]);
                }
        }
        return 0;
}