#include <windows.h>

#include<stdio.h>
#include<stdlib.h>

struct data
{
	char name[50];
	char address[50];
	int age;
	
};

int main()
{
	int i;
	char a[50];
	char add[50];
	int ag;
	struct data students[5];
	
	for(i=1;i<=5;i++)
	{
		printf("Please enter name of %d Student",i);
		scanf("%s",&students[i].name);
		printf("Please enter address of %d Student",i);
		scanf("%s",&students[i].address);
		printf("Please enter age of %d student",i);
		scanf("%d",&ag);
		students[i].age=("%d",ag);
	}
	return 0;
}
