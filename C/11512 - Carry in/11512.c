#include <stdio.h>
#include <string.h>

int main (void)
{
	char a[1010], b[1010];
	int i, j, ans, sum;

	while (scanf("%s%s", a, b) != EOF) {
		ans = 0;
		sum = 0;
		i = strlen(a) - 1;
		j = strlen(b) - 1;
		while (i >= 0 || j >= 0) {
			if (i >= 0) sum += a[i] - '0';
			if (j >= 0) sum += b[j] - '0';
			if (sum >= 10) ans++;
			sum /= 10;
			i--;
			j--;
		}
		printf("%d\n", ans);
	}

	return 0;
}