#include<stdio.h>
char pond[1000][1000];
int m, n;

void find_pond(int i, int j)
{
	if(pond[i][j] == '~'){
		pond[i][j] = '.';
		if(j != 0) find_pond(i, j-1);
		if(j != n-1) find_pond(i, j+1);
		if(i != 0) find_pond(i-1, j);
		if(i != m-1) find_pond(i+1, j);
	}
}

int main(void)
{
	int i, j, cnt;
	char c;
	while (scanf("%d%d", &m, &n) != EOF) {
		cnt = 0;
		for (i = 0;i < m;i++) {
			for (j = 0;j < n;j++) {
				c = getchar();
				if(c == '\n') j--;
				else pond[i][j] = c;
			}
		}

		for (i = 0;i < m;i++) {
			for (j = 0;j < n;j++) {
				if (pond[i][j] == '~') {
					find_pond(i, j);
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}