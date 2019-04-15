#include<stdio.h>	//Program by Tony Chiang
#include<math.h> 	//during Introduction to Programming course
int main(void)		//, NTHU in 2017.
{
	int a;
	double num;
	double after;
	int i, j;
	while(scanf("%lf", &num) != EOF){
		a = num;		//make a copy of num
		after = 0;
		i = 0;
		while(a > 0){	//after = reverse(int(a)) * 10 
			after += a % 10;
			after *= 10;
			a /= 10;
			i++;
		}
		j = 6 - i;		//j = fraction digits
		num *= pow(10, j);
		a = num;
		while(j > 0){	//after = reverse (a) * 10
			after += a % 10;
			after *= 10;
			a /= 10;
			j --;
		}
		j = 7 - i;		//after /= (6-i)+1 -> j = fraction digits +1
		after /= pow(10, j);
		num /= pow(10, i);
		j--;			//j = fraction digits
		after += num;	//sum += after
		printf("%.*lf", j, after);	//formatted output
	}
	return 0;
}
