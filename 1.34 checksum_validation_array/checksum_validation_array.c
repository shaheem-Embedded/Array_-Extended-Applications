/*
 * checksum_validation_array.c
 *
 *  Created on: Apr 27, 2026
 *      Author: SHAHEEM
 */


#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

char* checksum(int *array,int n);
void wait_user();
int main()
{
	int n;
	printf("Enter the Number of byte elements : \n");
	scanf("%d",&n);
	int array[n];
	printf("Enter the Array Elements:\n");

	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}

char* result = checksum(array,n);
printf("%s", result);
wait_user();
}

char* checksum(int *array,int n)
{
int checksum=0;
for(int i=0;i<n-1;i++)
{
	checksum ^= (*(array+i));
}
if(checksum == (*(array+(n-1))))
{
	return "Checksum is valid";
}
return "invalid checksum";
}

void wait_user()
{
	while(getchar()!='\n');
	printf("\nPRESS ENTER TO EXIT...");
	getchar();
}

