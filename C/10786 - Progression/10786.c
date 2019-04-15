#include<stdio.h>
int main(void)
{
	int arr[3];
	double d;
	while(scanf("%d%d%d", &arr[0], &arr[1], &arr[2]) != EOF){
		d = arr[2] - arr[1];
		if(d == arr[1] - arr[0])
			printf("%d %d", arr[0] - (int)d, arr[2] + (int)d);
		else{
			d = (float)arr[2] / (float)arr[1];
			printf("%.0f %.0f", arr[0] / d, arr[2] * d);
		}
	}
	return 0;
}