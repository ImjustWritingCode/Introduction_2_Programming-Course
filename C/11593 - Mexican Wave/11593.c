#include<stdio.h>	//Program by Tony Chiang
int main(void)		//during Introduction to Progarmming course
{					//, NTHU in 2017.
	int n, m, t, T;		//n:total length  m:wave length  t:time
	scanf("%d", &T);
	int i, j;
	for(i = 0;i < T;i++){
		scanf("%d%d%d", &n, &m, &t);
		for(j = 0;j < t;j++){		//two conditions while (j < t)
			if((t - m) > j && j < n)	//first cond:if j is after the end
				 printf("-");			//of the wave
			else if (j < n)
				printf("^");			//else
		}
		for(j = t;j < n;j++)		//from t to n: only on condition
			printf("-");
		printf("\n");
	}
	return 0;
}
