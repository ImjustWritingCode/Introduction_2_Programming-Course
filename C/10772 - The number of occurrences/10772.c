#include<stdio.h>		//Program by Tony Chiang
int main(void)			//during Introduction to Programming course
{						//, NTHU in 2017.
    char A[5], B[11];
    int i, j, k, n, end_A, end_B, cnt, max;
    while(scanf("%s", A) != EOF){
        end_A = 0;
        max = 0;
        scanf("%d", &n);
        while(A[end_A] != 0)	//end_A = len(A)
                end_A++;
        for(i = 0;i < n;i++){
                cnt = 0;
                scanf("%s", B);
                j = 0;
                end_B = 0;
                while(B[end_B] != 0)
                        end_B++;
                for(j = 0;j < end_B;j++){
                        k = 0;
                        if(B[j] == A[0]){
                                for(k = 1;k < end_A;k++){
                                        if(B[j+k] != A[k])
                                                break;
                                }
                        }
                        if(k == end_A)
                                cnt++;
                }
                if(cnt > max)
                        max = cnt;
        }
        printf("%d", max);
    }
    return 0;
}
