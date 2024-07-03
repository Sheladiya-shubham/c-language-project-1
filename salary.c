#include <stdio.h>

main(){
	int income,hdr,ta,da;
	
	printf("Enter your income=");
	scanf("%d",&income);
	printf("enter your hdr rate=");
	scanf("%d",&hdr);
	printf("enter your ta rate=");
	scanf("%d",&ta);
	printf("enter your da rate=");
	scanf("%d",&da);
	
	int gross,hd,t,d;
	hdr=income*hdr/100;
	ta=income*ta/100;
	da=income*da/100;
	gross=income+hdr+ta+da;
	printf("gross income=%d",gross);
}