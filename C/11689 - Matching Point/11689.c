#include<stdio.h>
#include<string.h>

char str[30];
char mat[30];

int match (int s, int m)
{
	int i, ans = 0;
	int len_m = (int)strlen(mat);
	int len_s = (int)strlen(str);
	for (i = s;i < len_s;i++) {
		if (str[i] == mat[m]) {
			if (m == len_m-1) ans++;
			else ans += match(i+1, m+1);
		}
	}
	return ans;
}

int main(void)
{
	while (scanf("%s%s", str, mat) != EOF) printf("%d\n", match(0, 0));
	return 0;
}