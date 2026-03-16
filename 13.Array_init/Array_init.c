#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

void wait_user();
void clear_buffer();
int entry();
int array_process();

int main()
{
	while(1)
	{
		if((entry()!=0))
				{
			     continue;
				}
		if((array_process()!=0))
		{
			continue;
		}
	}
 return 0;
}


int entry()
{
	int option;
	printf("  Enter Below Option To proceed..\n"
			"--------------------------------\n"
			"1. Enter the Array Limit: \n"
			"2. Exit\n"
			"--------------------------------\n");
	if(scanf("%d",&option)!=1)
	{
		printf("Wrong Entry..Enter option 1 or 2.");
		clear_buffer();
		return -1;
	}
	else if (option == 1)
	{
		return 0;
	}
	else if (option == 2)
	{
		printf("Thanks Exiting the Window..");
		wait_user();
	}
	else
	{
		printf("invalid Entry..Please Enter option 1 or 2.");
		clear_buffer();
		return -1;
	}
	return 0;
}
int array_process()
{
	int n;
	while(1)
	{
	printf("Enter Limit of Array Elements to proceed..\n");
			if (scanf("%d",&n)!=1)
			{
				printf("Wrong Limit Entered..Please Enter Proper Limit of array in digits..\n");
							clear_buffer();
						//	return -1;
							continue;
			}
			else if (n<0)
			{
		        printf("Please enter limit >0\n");
		    	clear_buffer();
				//return -1;
				continue;
			}
			break;
	}

				if(n>0)
				{
				printf("Enter %d no of elements for your array..\n",n);
				int elements [n];
				for(int i=0;i<n;i++)
				{
					while(1)
					{
					 if(scanf("%d",&elements[i])!=1)
					{
						printf("Entered Invalid Array element such as any special character is not acceptable..Try again\n");
					//	return -1;
						clear_buffer();
						continue;
					}
					 break;
				}
				}
				printf("Entered Array elements of size %d are as follows..\n",n);
				for(int i=0;i<n;i++)
				{
							printf("%d\n",elements[i]);
				}
				}
return 0;
}
void wait_user()
{
	while(getchar()!='\n');
	printf("Press Enter to Exit");
	getchar();
	exit(0);
}
void clear_buffer()
{
	int c;
	while((c=getchar())!='\n'&& c!= EOF);
}
