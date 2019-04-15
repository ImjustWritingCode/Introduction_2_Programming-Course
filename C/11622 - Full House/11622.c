#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j, T;
	int cards[5];
	int key, key2;//test if only 2 kinds of numbers
	char temp[5];
	int cnt1, cnt2;
	while(scanf("%d", &T) != EOF){
		for(i = 0;i < T;i++){
			cnt1 = 1;//reset counter
			cnt2 = 0;//because first one is definite, so doesn't need to test
			for(j = 0;j < 5;j++){
				scanf("%s", temp);
				if(atoi(temp) != 0)
					cards[j] = atoi(temp);
				else
					cards[j] = (int)temp[0];
			}
			key = cards[0];//let first one be the key1
			for(j = 1;j < 5;j++){//cnt1 counts first serie of nums
				if(cards[j] == key)
					cnt1++;
			}
			j = 1;//use key1 to determine when is the second num
			while(cards[j] == key)
				j++;
			key2 = cards[j];
			while(j < 5){//cnt2 counts the 2nd serie of nums
				if(cards[j] == key2)
					cnt2++;
				j++;
			}
			if((cnt1 == 2 && cnt2 == 3) || (cnt1 == 3 && cnt2 == 2))
				printf("YES\n");//test if the 2 series matches the full house
			else
				printf("NO\n");//condition
		}
	}
	return 0;
}