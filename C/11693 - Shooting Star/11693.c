#include<stdio.h>
char map[30][30];
int h;

int shooting (int x, int y, int dir)
{
	map[x][y] = '*';
	int ans;
	if (dir == 'u') {
		if (map[x-1][y] == '-') ans = shooting (x+1, y+1, 'd');
		else if (x == 0) return y;
		else ans = shooting (x-1, y+1, dir);
	}
	if (dir == 'd') {
		if (map[x+1][y] == '-') ans = shooting (x-1, y+1, 'u');
		else if (x == h+1) return y;
		else ans = shooting (x+1, y+1, dir);
	}
	return ans;
}

int main(void)
{
	int c, f, s, temp;
	int i, j;
	char d;
	while (scanf("%d%d%d%d", &c, &f, &h, &s) != EOF) {
		while (1) {
			d = getchar();
			if (d != '\n') break;
		}
		for (i = 0;i < 30;i++)
			for (j = 0;j < 30;j++) map[i][j] = ' ';

		for (i = 0;i < c;i++) map[0][i] = '-';

		for (i = 0;i < f;i++) map[h+1][i] = '-';

		temp = shooting(s, 0, d) + 1;

		if (f < c) f = c;

		if (f < temp) f = temp;

		for (i = 0;i < h+2;i++) {
			for (j = 0;j < f;j++) printf("%c", map[i][j]);
			printf("\n");
		}
	}
	return 0;
}