#include<stdio.h>
#include<stdlib.h>
char str[100][100];
int main(void)
{
	char c;
	int cnt, i, j;
	while (1) {
		for (i = 0;i < 100;i++) //reset str
			for (j = 0;j < 100;j++) str[i][j] = '\0';
		cnt = 0;
		i = 0;
		j = 0;
		while (1) {
			c = getchar();
			if (c == EOF) exit(0);
			if (c == '\n') break;
			if (c != ' ') {
				str[i][j] = c;
				j++;
			}
			else {
				i++;
				j = 0;
			}
		}
		j = 0;
		while (i >= 0) {
			if (str[i][0] != '\0' && j == 0) {
				printf("%s", str[i]);
				j++;
			}
			else if (str[i][0] != '\0') printf(" %s", str[i]);
			i--;
		}
		printf("\n");
	}
	return 0;
}