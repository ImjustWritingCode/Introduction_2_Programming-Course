#include<stdio.h>		//Program by Tony Chiang
int factors(int num)	//during Introduction to Programming course
{						//, NTHU in 2017.
    int i = 1;
    int cnt = 0;
    while(i * i < num){
            if(!(num % i))
                    cnt++;
            i++;
    }
    cnt *= 2;
    if(i * i == num)
            cnt++;
    if(num == 1)
            cnt = 1;
    return cnt;
}
int main(void)
{
    int i, j, cnt;		//store for loop and isprime counters
    int T, x, n;		//store given vars
    scanf("%d", &T);
    for(i = 0;i < T;i++){
            cnt = 0;
            scanf("%d%d", &x, &n);
            for(j = x;cnt < n;j++){		//start from x, if isprime == n then quit
                    if(factors(j) == 2)		//isprime:factors are 1 and itself
                            cnt++;
            }
            j--;	//the for loop will add j before determine (cnt < n)
            printf("%d\n", j);		//print out the book to donate.
    }
    return 0;
}
