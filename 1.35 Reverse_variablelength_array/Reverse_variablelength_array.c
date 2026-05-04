/*
 * Reverse_variablelength_array.c
 *
 *  Created on: Apr 28, 2026
 *      Author: SHAHEEM
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int reverse_array(int *array,int n);
void wait_user();
void clear_buffer();
int main()
{
 int n;
 printf("Enter the number of Elements in the array\n");
 scanf("%d",&n);
 clear_buffer();
 int array[n];
 printf("\nEnter the elements of the defined array\n");
 for(int i=0;i<n;i++)
 {
	 scanf("%d",&array[i]);
 }
 printf("Array elements are as \n");
 for(int i=0;i<n;i++)
 {
	 printf("%d\t",array[i]);
 }

reverse_array(array,n);
printf("Reversed Array elements are as \n");
 for(int i=0;i<n;i++)
 {
	 printf("%d\t",array[i]);
 }
wait_user();
}


int reverse_array(int *array,int n)
{
int *start = array;
int *end = array+n-1;
while(start<end)
{
	int temp = *start;
	*start = *end;
	*end =temp;
	start++;
	end--;
}
return 0;
}

void wait_user()
{
	while(getchar() != '\n');
	printf("PRESS ENTER TO EXIT...!");
	getchar();
}
void clear_buffer()
{
int c;
while((c = getchar())!='\n' && c != EOF);
}
