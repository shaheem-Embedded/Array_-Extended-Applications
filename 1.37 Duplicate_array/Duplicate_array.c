/*
 * Duplicate_array.c
 *
 *  Created on: May 6, 2026
 *      Author: SHAHEEM
 */

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int n;
void wait_user();
int duplicate(int *array,int n);
int main()
{
	printf("Enter the Number of elements in the array\n");
	scanf("%d",&n);
	int array[n];

	printf("Enter the Array Elements in your array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}

	printf("Entered the Array elements are as..\n");
		for(int i=0;i<n;i++)
		{
			printf("%d\t",array[i]);
		}
int result = duplicate(array,n);
if (result == -1)
{
	printf("Duplicate not found");
}
else
{
	printf("Duplicate found %d\t:",result);
}
// printf("%s & duplicate array element is %d",result,array[i]);
		wait_user();
}

int duplicate(int *array,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		if(array[i] == array[j])
		{
			return array[i];
		}
		}
	}
	return -1;
}

void wait_user()
{
	while(getchar()!='\n');
	printf("PRESS ENTER TO EXIT...");
	getchar();
}
