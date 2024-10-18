#include<stdio.h>
void main(){
	int i=3,*x;
	float j=1.5,*y;
	char k='c',*z;
	
	printf("\n Value of i=%d",i);
	printf("\n Value of j=%f",j);
	printf("\n Value of k=%c",k);
	
	x=&i;
	y=&j;
	z=&k;
	
	printf("\nOriginal  Value of x=%u",x);
	printf("\nOriginal  Value of y=%u",y);
	printf("\nOriginal  Value of z=%u",z);
	x++;
	y++;
	z++;
	printf("\nNew Value of x=%u",x);
    printf("\nNew Value of y=%u",y);
    printf("\nNew Value of z=%u",z);
	
	
}
