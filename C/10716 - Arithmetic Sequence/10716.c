#include<stdio.h>	//Program by Tony Chiang
int main(void)		//during Introduction to Programming course
{					//, NTHU in 2017.
	int a, d, i, n;
	int sum;
	while(scanf("%d%d%d", &a, &n, &d) != EOF){
		sum = 0;
		for(i = 0;i < n;i++){
			sum += a;
			a += d;
		}
		a -= d;					//a = An, sum = Sn
		printf("%d %d", a, sum);
	}
	return 0;
}
