#include <stdio.h>
#include <ctype.h>
int cal(void){
    int ans, op1, op2;
    char c = getchar();
    if ( c == ' ' ) return cal();
    if ( isdigit(c) ) {
        ungetc(c, stdin);
        scanf("%d", &ans);
        return ans;
    }
    op1 = cal();
    op2 = cal();
    if( c == '+' ) return op1 + op2;
    if( c == '-' ) return op1 - op2;
    if( c == '*' ) return op1 * op2;
}
int main(void){
    printf("%d", cal());
    return 0;
}