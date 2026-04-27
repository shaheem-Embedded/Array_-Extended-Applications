#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>


void display_array(int *parr_elements,int n);
void wait_user();

int main()
{
	int n=0;
	printf("Enter no of array of elements");
	scanf("%d",&n);

	int  arr_elements [n];
	printf("Enter %d no of elements for your array..\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr_elements[i]);
	}
	display_array(arr_elements,n);
	wait_user();
	return 0;
}

void display_array(int *parr_elements,int n)
{
	printf("The array elements are as..");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",*(parr_elements+i));
	}
}

void wait_user()
{
	printf("Press Enter to EXIT..");
	while(getchar()!='\n');
	getchar();
}
