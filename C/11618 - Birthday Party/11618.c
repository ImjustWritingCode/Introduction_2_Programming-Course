#include<stdio.h>
long long int gcd(long long int big,long long int small)
{
        if(!(big % small))
                return small;
        else
                return gcd(small, big % small);
}
long long int lcm(long long int big,long long int small)
{
        return big / gcd(big, small) * small;
}
long long int alcm(long long int a, long long int b, long long int c)
{
        return lcm(lcm(a, b), c);
}
int main(void)
{
        int T;
        int i;
        long long int n, j, x[3];
        long long int num;//store value of the lcm
        while(scanf("%d", &T) != EOF){
                for(i = 0;i < T;i++){
                        scanf("%lld", &n);
                        for(j = 0;j < 3;j++)
                                scanf("%lld", &x[j]);
                        num = alcm(gcd(x[0], n), gcd(x[1], n), gcd(x[2], n));//people get all 3 balloons
                        printf("%lld\n", lcm(num, n)/num);
                }
        }
        return 0;
}