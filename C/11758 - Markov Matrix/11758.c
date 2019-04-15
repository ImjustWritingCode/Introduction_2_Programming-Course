#include<stdio.h>
double tran[5][5];
int n, p;
int check (double c[5], int t)
{
	double c1[5] = {0};
	int i, j;
	for (i = 0;i < n;i++)
		for (j = 0;j < n;j++) c1[i] += tran[i][j] * c[j];
	t++;
	if (c1[0] >= c[0]) return 0;
	else if (c1[0] <= p) return t;
	else return check(c1, t);
}
int main (void)
{
	int T, i, j;
	double cities[5];
	while (scanf("%d", &T) != EOF) {
		while (T--) {
			scanf("%d", &n);
			for (i = 0;i < n;i++)
				for (j = 0;j < n;j++) scanf("%lf", &tran[i][j]);
			for (i = 0;i < n;i++) scanf("%lf", &cities[i]);
			scanf("%d", &p);
			if (cities[0] <= p) printf("0\n");
			else if (check(cities, 0) > 0) printf("%d\n", check(cities, 0));
			else printf("Never\n");
		}
	}
	return 0;
}