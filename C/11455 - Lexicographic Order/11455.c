#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char str[1010][60];

int main (void)
{
	int i, N;
	while (scanf("%d", &N) != EOF) {
		if (N == 0) exit(0);
		for (i = 0;i < N;i++) scanf("%s", str[i]);
		qsort((void*)str, N, sizeof(str[0]), (int(*) (const void *, const void *))strcmp);
		for (i = 0;i < N;i++) printf("%s\n", str[i]);
		printf("\n");
	}
	return 0;
}