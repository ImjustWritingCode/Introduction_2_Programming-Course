#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str[200010];
int main (void)
{
	long long ans;
	int d, i;
	while (scanf("%s", str) != EOF) {
		ans = 0;
		d = 1;
		qsort(str, strlen(str), sizeof(char), (int (*)(const void *, const void *))strcmp);
		for (i = 0;i < strlen(str);i++) {
			if (str[i] != str[i+1]) {
				ans += (strlen(str) - i - 1) * d;
				d = 1;
			}
			else d++;
		}
		printf("%lld\n", ans+1);
	}
	return 0;
}