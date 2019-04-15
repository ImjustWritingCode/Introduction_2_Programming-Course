#include<stdio.h>
char map[1000][1000];
int m, n;

int find_water (int i, int j)
{
	int flag = 0;
	if (map[i][j] == '~') return 1;
	if (map[i][j] == 'e' || map[i][j] == '.') {
		if(map[i][j] == '.') map[i][j] = '#';
		if(j != 0) flag += find_water(i, j-1);
        if(j != n-1) flag += find_water(i, j+1);
        if(i != 0) flag += find_water(i-1, j);
        if(i != m-1) flag += find_water(i+1, j);
	}
	return flag;
}
	
int main(void)
{
	int i, j;
	char c;
	while (scanf("%d%d", &m, &n) != EOF) {
		for (i = 0;i < m;i++) {
			for (j = 0;j < n;j++) {
				c = getchar();
				if (c == '\n') j--;
				else map[i][j] = c;
			}
		}
		for (i = 0;i < m;i++) {
			for (j = 0;j < n;j++)
				if (map[i][j] == 'e') break;
			if(map[i][j] == 'e') break;
		}
		if (find_water(i, j) > 0) printf("Alive!\n");
		else printf("Dead!\n");
	}
	return 0;
}