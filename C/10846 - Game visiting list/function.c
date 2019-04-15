#include<stdio.h>		//function.c by Tony Chiang
#include"function.h"	//during Introduction to Programming course
void findNPC(int num){	//, NTHU in 2017.
	if(num == 0)
		return;
	else{
		printf("%d\n", num);	//easy recursion
		int i;
		for(i = 0;NPClist[num][i] != 0;i++)
			findNPC(NPClist[num][i]);
		return;
	}
}
