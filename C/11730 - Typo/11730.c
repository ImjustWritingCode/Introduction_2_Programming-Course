#include <stdio.h>
#include <string.h>

int ans;

void one_more(char[], char[], int);
void forgot_one(char[], char[], int);
void one_wrong(char[], char[], int);
void switch_one(char[], char[], int);

int main(void)
{
    //freopen("input.txt", "r", stdin);
    int T;
    scanf("%d", &T);
    while(T--){
        char correct[200001];
        char type[200001];
        scanf("%s%s", correct, type);
        ans = 0;
        one_more(correct, type, 0);
        forgot_one(correct, type, 0);
        one_wrong(correct, type, 0);
        switch_one(correct, type, 0);
        (ans==1) ? printf("Yes\n") : printf("No\n");
    }
    return 0;
}

void one_more(char correct[], char type[], int flag)
{
    if(flag==1) ans++;
    if(!flag) if(strlen(correct)+1 != strlen(type)) return;
    if(flag>1) {
            ans--;
            return;
    }
    for(int i=0; type[i] != '\0'; i++){
        if (correct[i]!=type[i]) {
                one_more(correct+i, type+i+1, flag+1);
                break;
        }
    }

}

void forgot_one(char correct[], char type[], int flag)
{
    if(flag==1) ans++;
    if(!flag) if(strlen(correct)-1 != strlen(type)) return;
    if(flag>1) {
            ans--;
            return;
    }
    for(int i=0; correct[i] != '\0'; i++){
        if (correct[i]!=type[i]) {
                forgot_one(correct+i+1, type+i, flag+1);
                break;
        }
    }

}

void one_wrong(char correct[], char type[], int flag)
{
    if(flag==1) ans++;
    if(!flag) if(strlen(correct) != strlen(type)) return;
    if(flag>1) {
            ans--;
            return;
    }
    for(int i=0; correct[i] != '\0'; i++){
        if (correct[i]!=type[i]) {
                one_wrong(correct+i+1, type+i+1, flag+1);
                break;
        }
    }

}

void switch_one(char correct[], char type[], int flag)
{
    if(flag==1) ans++;
    if(!flag) if(strlen(correct) != strlen(type)) return;
    if(flag>1) {
            ans--;
            return;
    }
    for(int i=0; correct[i] != '\0'; i++){
        if (correct[i]!=type[i]) {
            if(correct[i+1]==type[i] &&
               correct[i]==type[i+1]){
                    switch_one(correct+i+1, type+i+1, flag+1);
                    break;
            } else break;
        }
    }
}