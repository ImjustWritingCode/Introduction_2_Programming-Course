#include<stdio.h>
//#include<string.h>
int score[100010];
char name[100010][30];
int order[100010];
void swap (int a, int b)
{
	int s, t;
	//char str[30];
	s = score[a];
	t = order[a];
	//strcpy(str,name[a]);
	score[a] = score[b];
	order[a] = order[b];
	//strcpy(name[a], name[b]);
	score[b] = s;
	order[b] = t;
	//strcpy(name[b], str);
	return;
}
void sort (int n)
{
	int i, j, max, tmp;
	for (i = 0;i < n;i++){
		max = i;
		for (j = i;j < n;j++)
			if (score[max] < score[j]) max = j;
		for (j = max;j > i;j--) swap(j, j-1);
	}
	return;
}
int main (void)
{
	int n;
	int i, j;
	while (scanf("%d", &n) != EOF) {
		for (i = 0;i < 100010;i++) {
			for (j = 0;j < 30;j++) name[i][j] = '\0';
			score[i] = 0;
			order[i] = i;
		}
		for (i = 0;i < n;i++) scanf("%s%d", name[i], &score[i]);
		sort(n);
		for (i = 0;i < n;i++) printf("%s\n", name[order[i]]);
	}
	return 0;
}