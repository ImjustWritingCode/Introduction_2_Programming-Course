#include<stdio.h>
unsigned long long mod(unsigned long long base,unsigned long long power,unsigned long long div)
{
	unsigned long long ans;
	if(power == 1) return base % div;
	ans = mod(base, power/2, div);
	ans = (ans * ans) % div;
	if(power & 1) ans *= base % div;
	ans %= div;
	return ans;
}
int main(void)
{
	int T;
	unsigned long long a, n, p;
	int i;
	while(scanf("%d", &T) != EOF){
		for(i = 0;i < T;i++){
			scanf("%llu%llu%llu", &a, &n, &p);
			printf("%llu\n", mod(a, n, p));
		}
	}
	return 0;
}