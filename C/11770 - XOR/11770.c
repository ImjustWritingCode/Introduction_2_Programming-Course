#include<stdio.h>
unsigned long int arr[100010];
int n;
int isnotempty (void)
{
	int i;
	for (i = 0;i < n;i++)
		if (arr[i] != 0) return 1;
	return 0;
}
int main (void)
{
	int i, j;
	unsigned long int zeros, ones, dig;
	unsigned long long int ans;
	while (scanf("%d", &n) != EOF) {
		for (i = 0;i < 100010;i++) arr[i] = 0;//recallibrate
		ans = 0;
		dig = 0;
		for (i = 0;i < n;i++) scanf("%lu", &arr[i]);//input
		while (isnotempty()) {
			zeros = 0;
			ones = 0;
			for (i = 0;i < n;i++) {
				if (arr[i] & 1) ones ++;
				else zeros ++;
				arr[i] >>= 1;
			}
			if (zeros < ones) ans += zeros << dig;
			else ans += ones << dig;
			dig++;
		}
		printf("%llu\n", ans);
	}
	return 0;
}