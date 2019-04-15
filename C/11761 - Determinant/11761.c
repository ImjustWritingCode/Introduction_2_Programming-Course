#include<stdio.h>
#include<stdlib.h>
long long int det (int n, int** m)
{
	int i, j, k;
	unsigned long long int ans = 0;
	if (n == 1) return m[0][0];
	if (n == 2) return m[0][0] * m[1][1] - m[0][1] * m[1][0];
	int **m2 = (int**) malloc ((n-1) * sizeof(int*));
	for (i = 0;i < n-1;i++) m2[i] = (int*) malloc ((n-1) * sizeof(int));
	for (i = 0;i < n;i++) {
		for (j = 0;j < i;j++) 
			for (k = 1;k < n;k++) m2[k-1][j] = m[k][j];
		for (j = i;j < n-1;j++)
			for (k = 1;k < n;k++) m2[k-1][j] = m[k][j+1];
		if (i & 1) ans -= m[0][i] * det(n-1, m2);
		else ans += m[0][i] * det(n-1, m2);
	}
	return ans;
}
int main (void)
{
	int n;
	int i, j;
	int **mat;
	while (scanf("%d", &n) != EOF) {
		mat = (int**) malloc (n * sizeof(int*));
		for (i = 0;i < n;i++)
			mat[i] = (int*) malloc (n * sizeof(int));
		for (i = 0;i < n;i++) 
			for (j = 0;j < n;j++) scanf("%d", &mat[i][j]);
		printf("%lld\n", det(n, mat));
	}
	return 0;
}