#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float p,a,r,t,si,ci;
	printf("Enter the principal =");
	scanf("%f",&p);
	printf("Enter the rate of interest =");
	scanf("%f",&r);
	printf("Enter the time =");
	scanf("%f",& t);
	
	si=(p*r*t)/100;
	
	
	printf("\nSimpal interest=%f",si);

	a=p*(pow((1+r/100),t));
	ci=a-p;
	
	printf("\nCompound interest=%f",ci);
return 0;
}


