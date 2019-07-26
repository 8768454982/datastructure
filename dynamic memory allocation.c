//getch()


# include<stdio.h>
# include<stdlib.h>

int main()
{
	int *arr;
	int ins,exts,i;
	
	printf("enter how many element you want to insert:");
	scanf("%d",&ins);
	if (ins!=0)
	{
		//emory allocate for array 
		arr=(int *)calloc(ins,sizeof(int));
		
		printf("\nenter element for array:");
		for (i=0;i<ins;i++)
		{
			printf("\nenter element of index array[%d]:",i);
			scanf("%d",arr+i);
		}
		
		
		printf("\nprinting element of array:");
		for (i=0;i<ins;i++)
		{
			
			printf(" %d\t",*(arr+i));
		}
		
		char ch;
		printf("\n\ndo you want to nsert any element(Y/N):");
		ch=getch();// do not use scanf("%c",&ch);
		if (ch=='Y'||ch=='y')
		{
			printf("\nenter how many element you want to insert:");
			scanf("%d",&exts);
			
			arr=(int *)realloc(arr,(ins+exts)*sizeof(int));
			
			for (i=ins;i<(ins+exts);i++)
			{
				printf("\nenter element for index[%d]:",i);
				scanf("%d",arr+i);
			}	
			
		}
		else
			return 0;
		printf("\nprinting element of array:");
		for (i=0;i<(ins+exts);i++)
		{
			
			printf(" %d\t",*(arr+i));
		}
			
	}
	
	

	return 0;
}
