#include<stdio.h>
void main(){
	int num[]={24,34,12,44,56,17};
	int i=0;
	while(i<=5){
		printf("\naddress of element is %u",&num[i]);
		printf(" element=%d",num[i]);
		printf(" %d",*(num+i));
		printf(" %d",*(i+num));
		printf(" %d",i[num]);
		i++;
	}
}
