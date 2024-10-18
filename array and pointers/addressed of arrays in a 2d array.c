#include<stdio.h>
void main(){
	int stud[5][2]={
	{1234,56},
	{1212,33},
	{1434,80},
	{1312,78},
	{1203,75}
	
	};
	
	int i;
		for(i=0;i<=4;i++){
		
      printf("\naddress of %ith array is %u",i,stud[i]);
		
	}
}
