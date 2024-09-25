//不考虑找零的情况，用最少张数的钞票来支付账单。假设钞票面值只有100元、50元、20元、10元、5元、2元和1元。
#include<stdio.h>

int main()
{
	int bill;
	scanf("%d",&bill);
	int a,b,c,d,e,f,g;
	a=b=c=d=e=f=g=0;
	while (100<=bill) {
		a++;
		bill -= 100;
	}
	while (50<=bill) {
		b++;
		bill -= 50;
	}
	while (20<=bill) {
		c++;
		bill -= 20;
	}
	while (10<=bill) {
		d++;
		bill -= 10;
	}
	while (5<=bill) {
		e++;
		bill -= 5;
	}
	while (2<=bill) {
		f++;
		bill -= 2;
	}
	while (1<=bill) {
		g++;
		bill -= 1;
	}

	printf("100 - %d\n50 - %d\n20 - %d\n10 - %d\n5 - %d\n2 - %d\n1 - %d\n",a,b,c,d,e,f,g);
	
	return 0;
}
