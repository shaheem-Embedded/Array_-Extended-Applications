/*
 * left_rotate_array_k_position.c
 *
 *  Created on: May 5, 2026
 *      Author: SHAHEEM
 */


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

int n,p;
void wait_user();
void array_left_shift(int *array,int p,int n);
int main()
{
	printf("Enter the array length : ");
	scanf("%d",&n);
   int array[n];
   printf("Enter array Elements to store \n");
   for(int i=0;i<n;i++)
   {
	   scanf("%d",&array[i]);
   }
   printf("Entered array elements are as : \t");
   for(int i=0;i<n;i++)
   {
	   printf("%d",array[i]);
   }
   printf("\nEnter the number of positions array to be shifted left\n");
   scanf("%d",&p);
   array_left_shift(array,p,n);
   printf("\nLeft shifted array with %d numbers for %d length array is as: \n",p,n);
   for(int i=0;i<n;i++)
   {
	   printf("%d",array[i]);
   }
   wait_user();
}

void wait_user()
{
	while(getchar()!='\n');
	printf("Press Enter to EXIT...");
	getchar();
}

void array_left_shift(int *array,int p,int n)
{
	for(int i=0;i<p;i++)
	{
		int temp=array[0];
		for(int x=0;x<n-1;x++)
		{
			array[x] = array[x+1];
		}
		array[n-1] = temp;
	}
}
