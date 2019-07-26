// dainamic memory allocation in c
//their are two types of memory allocation
//1.static memory allocation (memoy size is fiexed )
//2.dynamic memory allocation( memoy size is changeable)

//we need predefine headder file stdlib.h
//1.malloc();---> used to allocate memory to structure/user define datatype
//2.calloc();--->used to allocate memory to array/drive datatype
//3.realloc();--->used to increase or decrease the size of array
//4.free();----->used to delete the memory/realise the memory

//prototype:  void*  malloc(size_t , size ) size_t->unsigned;

//32bit compiler return the size of integer 4 byte
//64bit compiler return the size of integer 2 byte

# include<stdio.h>
struct emp
{
	int eno;
	char name[20];
	float salary;
};




int main()
{
	struct emp *ptr;/* here we declair a struct type pointer 
	that can point a struct*/
	
	//ptr->eno=546;
	//printf("employe number:%d",ptr->eno);
	
	
	ptr=(struct emp*)malloc(sizeof (struct emp));
	if (ptr==NULL)
	{
		printf("memory is not allocated");
	}
	else
	{
		printf("enter employe number:");
		scanf("%d",&ptr->eno);
		fflush(stdin);//stander input for string
		printf("\nenter employe name:");
	 	scanf("%[^\n]s", ptr->name);//upto input \n 
	 	//gets(ptr->name);//we can also use gets();
		printf("\nenter employe salary:");
		scanf("%f",&ptr->salary);
		
		printf("\n\nprinting information:\n");
		printf("empolye Name:%s",ptr->name);
		printf("\nempolye number or id:%d",ptr->eno);
		printf("\nempolye salary:%f",ptr->salary);
	
	}
	free(ptr);
	
	
	return 0;
}






