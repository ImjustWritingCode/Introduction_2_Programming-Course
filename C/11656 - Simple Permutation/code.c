#include<stdio.h>
#include"function.h"
void print(int level, int n)
{
	if(level == n){
		if(n == 1)
			printf("%d\n", level);
		else
			printf("%d ", level);
		print(-(n-1), n);
	}
	else if(level == -1)
		printf("%d\n", -level);
	else if(level > 0){
		printf("%d ", level);
		print(level+1, n);
	}
	else if(level < 0){
		printf("%d ", -level);
		print(level+1, n);
	}
}