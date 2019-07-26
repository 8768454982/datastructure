//last in first out
//push
//pop
//teverse
//peek
//length

# include <stdio.h>
# include<conio.h>
# include<stdlib.h>
//at first we declair node structure
struct node 
{
	int data;//this is data part ;
	struct node *link;// this is link part;
};


//declair top
struct node *top=NULL;

// push function declair
void push()
{
	system("cls");
	struct node *temp;
	//memory allocate for node ;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter data for stack: ");
	scanf("%d",&temp->data);
	temp->link=top;//new node link or last node
	top=temp;
	printf("%d was inserted successfully.",top->data);
	getch();
	
	
}
// pop function declair
void pop()
{
	system("cls");
	if (top == NULL)
	{
		printf("stack is empty.");
		getch();
	}
	else
	{
		int popeditem;
		struct node *temp;
		temp=top;
		popeditem=temp->data;
		top=temp->link;
		temp->link=NULL;//seperate for the list;
		
		free(temp);//node was deleted ;
		printf("poped item:%d",popeditem);
		getch();
		
		
	}
}

//display function declair for stack
void display()
{	
	system("cls");
	if(top==NULL)
	{
		printf("stack is empty.");
		getch();
	}
	else
	{
		struct node *temp;
		temp=top;
		printf("printing stack element are:");
		while (temp!=NULL)
		{
			printf(" %d\t",temp->data);
			temp=temp->link;
			
		}
		getch();
	}
	
	
}

//peek function declair
// pop function declair
void peek()
{
	system("cls");
	if (top == NULL)
	{
		printf("stack is empty.");
		getch();
	}
	else
	{
		int peekeditem;
		struct node *temp;
		temp=top;
		peekeditem=temp->data;
		printf("peeked item:%d",peekeditem);
		getch();
		
		
	}
}



int main()
{
	int choice;
	while(1)// infinate loop for run the programme continuously
	{
	//declair menu 
	system("cls"); 
	printf("\t  ...........................................................\n");
	printf("\t  :---------------------------------------------------------:\n");
	printf("\t  :   WELLCOME TO STACK IMPLEMENTATION USING LINKED LIST    :\n");
	printf("\t  :   ==================================================    :\n");
	printf("\t  :   	           DESIGN BY SOUMADIP DEY                   :\n");
	printf("\t  :   ==================================================    :\n");
	printf("\t  :                   1.PUSH OPERATION                      :\n");
	printf("\t  :                   2.POP OPERATION                       :\n");
	printf("\t  :                   3.PEEK OPERATON                       :\n");
	printf("\t  :                   4.TRAVERSE OPRATION                   :\n");
	printf("\t  :                   5.QUIT                                :\n");
	printf("\t  :---------------------------------------------------------:\n");
	printf("\t  :.........................................................:\n");
	printf("\n\t                :: enter your choice:");
	scanf("%d",&choice);
	
	
	
	switch(choice)
	{
		case 1:{// for push operation
			system("cls");
			push();
			break;
		}
		case 2://for pop operaton 
			{
				system("cls");
				pop();
				break;	
			}
		
		case 3:{//for peek operation
				system("cls");
				peek();
				break;
		}
		
		case 4:{//for traverse operation
			system("cls");
			display();		
			break;
		}
		
		case 5:{//for exit app
			exit(0);
			break;
		}
		default://for invalid input
		{
			printf("\t\t       invalid input. please try agin...");
			fflush(stdin);
			getch();
			
					
		}	
		
	}	
	
}
	return 0;
}
