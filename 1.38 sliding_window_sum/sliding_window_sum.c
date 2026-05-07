/*
 * sliding_window_sum.c
 *
 *  Created on: May 7, 2026
 *      Author: SHAHEEM
 */


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

void wait_user();
int slide_window(int* array,int n,int k);
int n,k,array[10];
int main()
{
	printf("Enter the Number of Array elements:\n");
	scanf("%d",&n);
	printf("Enter the width of sliding window:\n");
	scanf("%d",&k);

	printf("Enter the Array Elements :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Entered array elements are as :\n");
	for(int i=0;i<n;i++)
		{
			printf("%d\t",array[i]);
		}
slide_window(array,n,k);

wait_user();
}


int slide_window(int* array,int n,int k)
{

	for(int i=0;i<(n-k)+1;i++)
	{
		int sum=0;
		for(int j=i;j<i+k;j++)
		{
			sum+=array[j];
		}
		printf("\nSum of %d window is %d: ",i,sum);
	}
	return 0;
}

void wait_user()
{
 while( getchar()!='\n');
 printf("\nPRESS ENTER TO EXIT...");
 getchar();
}
