#include<stdio.h>	//Program by Tony Chiang
int main(void)		//during Introduction to Programming Course
{					//, NTHU in 2017.
	int n, x, y, none;
	int least_one;		//n:total people  x:one of the class
	int both;			//y:the other class
	int x_only;
	while(scanf("%d%d%d%d", &n, &x, &y, &none) != EOF){
		least_one = n - none;
		both = x + y - least_one;
		x_only = x - both;
		printf("%d %d", both, x_only);
	}
	return 0;
}
