#include <stdio.h>
#include <string.h>

int main (void) {
	char str[1001] = {0};
	char ch;
	int i, j, N, flag;

	scanf("%d", &N);
	ch = getchar();//eat '\n' GI
	for (i = 0;i < N;i++) {
		flag = 1;
		for (j = 0;j < 1001;j++) str[j] = '\0';
		while (1) {
			ch = getchar();
			if (ch == '\n') break;
			else if (ch == '<' || ch == '(' || ch == '[' || ch == '{') str[strlen(str)] = ch;
			else if (ch == '>' && str[strlen(str)-1] == '<') str[strlen(str)-1] = '\0';
			else if (ch == ')' && str[strlen(str)-1] == '(') str[strlen(str)-1] = '\0';
			else if (ch == ']' && str[strlen(str)-1] == '[') str[strlen(str)-1] = '\0';
			else if (ch == '}' && str[strlen(str)-1] == '{') str[strlen(str)-1] = '\0';
			else flag = 0;
		};
		if (!strlen(str) && flag == 1) printf("Case %d: Yes\n", i+1);
		else printf("Case %d: No\n", i+1);
	}
	return 0;
}