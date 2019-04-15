#include<stdio.h>
long mat1[100][100];//set matrixes
long mat2[100][100];
long ans[100][100];
int main(void)
{
        int n, m, p;
        int i, j, k;
        while(scanf("%d%d%d", &n, &m, &p) != EOF){
                for(i = 0;i < n;i++){
                        for(j = 0;j < m;j++)
                                scanf("%ld", &mat1[i][j]);//input mat1
                }
                for(i = 0;i < m;i++){
                        for(j = 0;j < p;j++)
                                scanf("%ld", &mat2[i][j]);//input mat2
                }
                for(i = 0;i < n;i++){
                        for(j = 0;j < p;j++){
                                ans[i][j] = 0;//init the answer matrix
                                for(k = 0;k < m;k++)
                                        ans[i][j] += mat1[i][k] * mat2[k][j];
                        }
                }
                for(i = 0;i < n;i++){
                        for(j = 0;j < p-1;j++)
                                printf("%ld ", ans[i][j]);
                        printf("%ld\n", ans[i][p-1]);
                }
                printf("\n");
        }
        return 0;
}