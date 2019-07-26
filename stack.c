// stack last in first out[LIFO]
//1.creation of stack
//2.push(int element)
//3.pop();
//4.traverse();
//5.isEmpty();
//6.isFull();
//7.size();
//peek();
# include<stdio.h>
# include<stdlib.h>
# include<conio.h>
//global veriable declair for stack operation
int *stack;
	int top=-1,capacity;


//declair push funcion 
//insert element for stack
 void push(int ele)
 {
 	if(isFull())
 	{
 		printf("stack is full you can't insert any element.");
	 	
	 }
 	else
 	{
 		top++;
 		stack[top]=ele;
 		printf("element was inserted succesfully.");
	 }
 }
 
 // isFull() function declair
 int isFull()
 {
 	if (top==(capacity-1))//capacity -1 because stack start with 0 index and contnue capacity-1 index
 	{
 		return 1;
	 }
	 else
	 	return 0;
 }
 
 
 
//declair pop function
//delete element for stack
int pop()
{

	int ele;
	
	if (isEmpty())
	{
		printf("stack is empty there are no element to pop.\n");
		getch();
		return 0;
	}
	else
	{
		ele=stack[top];
		top--;
		return ele;
	}
	
}

//isEmpty() function declair
int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
		return 0;
}


//peek function declail 
//this funtion show last element but not delete element
int peek()
{
	
	if (isEmpty())
	{
		printf("the stack is empty there are no element to peek");
		return 0;
		
		
	}
	else
	{
		return stack[top];
	}
}

//traverse() function declair
//print element
int traverse()
{
	if(isEmpty())
	{
		printf("the stack is empty there are no element to print");
		getch();
		return 0;
	}	
	else
		{
			int i;
		printf("stack elements are :");
		for (i=0;i<=top;i++)
		{
			printf(" %d ",stack[i]);
		}
		
		printf("\nstack elements are printing was last in frist out rulls:");
		for (i=top;0<=i;i--)
		{
			printf(" %d ",stack[i]);
		}
		
		getch();	
		}

}



int main()
{
	int choice;
	
	//this concept is array
	//int arr[5];//its gets a memory allocation for storing 5 element
	
	
	//rotaed array veriable 90 degree to understand the concept of stacks
	//int stack[5];//static creation of stack
	
	
	printf("enter capacity for stack that you want :");
	scanf("%d",&capacity);
	stack=(int *)calloc(capacity,sizeof(int));//dianamic creation of stack
	 
	
	
	
	while(1)// infinate loop for run the programme continuously
	{
	//declair menu 
	system("cls"); 
	printf("\t\t..............................................\n");
	printf("\t\t:--------------------------------------------:\n");
	printf("\t\t:     WELLCOME TO STACK IMPLEMENTATION       :\n");
	printf("\t\t:   ====================================     :\n");
	printf("\t\t:   	 DESIGN BY SOUMADIP DEY              :\n");
	printf("\t\t:   ====================================     :\n");
	printf("\t\t:        1.PUSH OPERATION                    :\n");
	printf("\t\t:        2.POP OPERATION                     :\n");
	printf("\t\t:        3.PEEK OPERATON                     :\n");
	printf("\t\t:        4.TRAVERSE OPRATION                 :\n");
	printf("\t\t:        5.QUIT                              :\n");
	printf("\t\t:--------------------------------------------:\n");
	printf("\t\t:............................................:\n");
	printf("\n\t\t      :: enter your choice:");
	scanf("%d",&choice);
	
	int i,n;
	
	switch(choice)
	{
		case 1:{// for push operation
			int ele;
			system("cls");
			printf("enter how many element you want to insert(Warnning the stack size is %d):",capacity);
			scanf("%d",&n);
			int run;
			if (n<=capacity)
			{
				run=n;
			}
			else
				run=(capacity+1);
			for (i=1;i<=run;i++)
			{
				printf("\nenter %d element for stack:",i);
				scanf("%d",&ele);
				push(ele);
				
			}
			getch();
			break;
		}
		case 2://for pop operaton 
			{
				system("cls");
				int popeditem;
				popeditem=pop();
				if(isEmpty()!=1||stack[0]==popeditem)// stack is not empty or stack first element equal to popeditem
				{
					printf("poped item:%d",popeditem);
					getch();
				}
				break;	
			}
		
		case 3:{//for peek operation
				system("cls");
				int peekeditem;
				peekeditem=peek();//call peek function
				if(isEmpty()!=1)// stack is not empty 
				{
					printf("peek item:%d",peekeditem);
				}
				getch();
				break;
		}
		
		case 4:{//for traverse operation
			system("cls");
			traverse();		
			break;
		}
		
		case 5:{//for exit app
			exit(0);
			break;
		}
		default://for invalid input
		{
			printf("\t\t   invalid input. please try agin...");
			fflush(stdin);
			getch();
			
					
		}	
		
	}	
	
}
	
	return 0;
}

