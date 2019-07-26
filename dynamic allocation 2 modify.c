 # include<stdio.h>
# include<stdlib.h>

void print(int *a,int s)// this function print array
{
	int i;
	printf("\nprinting element of array:");
	for(i=0;i<s;i++)
	{
		printf(" %d\t",*(a+i));
	} 
}

int main()
{
	int *arr,i,cap,increase;
	char ch;
	while(1)
	{
		system("cls");
		
	printf("how many element you want to insert:");
	scanf("%d",&cap);
	if (cap!=NULL)
	{
		arr=(int *)calloc(cap,sizeof(int));
		for(i=0;i<cap;i++)
		{
			printf("\nenter element for array[%d]:",i);
			scanf("%d",arr+i);
		}
		
		print(arr,(cap));
		
		printf("\n\nDo you want to insert any element(Y/N):");
		scanf("%s",&ch);
		if(ch=='Y'||ch=='y')
		{
			printf("\nenter how many element you want to insert:");
			scanf("%d",&increase);
			arr=(int *)realloc(arr,(cap+increase)*sizeof(int));
			for(i=cap;i<cap+increase;i++)
			{
				printf("\nenter new element for array[%d]:",i);
				scanf("%d",arr+i);
			}
			
			
			print(arr,(cap+increase));
			getch();
		}
		
	}
	else
	 return 0;
	
	}
	
	return 0;
}

