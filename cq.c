//circular queue implementation

# include<stdio.h>
# include<stdlib.h>
# include<conio.h>
int *cqueue,size;
int front=0,rear=0;
int count=0;

//function prototype
void insert(void);
void delete_ele(void);
void size_of_q(void);
void display(void);

int main()
{
	printf("enter size for circular queue:");
	scanf("%d",&size);
	/// memory allocate for queue
	cqueue=(int *)calloc(size,sizeof(int ));	
	while (1)
	{
		system("cls");
		int ch;
		printf("\t .......................................................\n");
		printf("\t :-----------------------------------------------------:\n");
		printf("\t :     WELLCOME TO CIRCULAR QUEUE IMPLEMENTATION       :\n");
		printf("\t :   =============================================     :\n");
		printf("\t :   	       DESIGN BY SOUMADIP DEY                  :\n");
		printf("\t :   =============================================     :\n");
		printf("\t :               1.INSERT AN ELEMENT                   :\n");
		printf("\t :               2.DELETE AN ELEMENT                   :\n");
		printf("\t :               3.PRINT THE QUEUE                     :\n");
		printf("\t :               4.SIZE OF THE QUEUE                   :\n");
		printf("\t :               5.QUIT                                :\n");
		printf("\t :-----------------------------------------------------:\n");
		printf("\t :.....................................................:\n");
		printf("\n\t            :: enter your choice:");
		fflush(stdin);
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				delete_ele();
				break;	
			case 3:
				display();
				break;
			case 4:
				size_of_q();
				break;
			case 5:
				exit(1);
			default:
				printf("\n\t\t      Invalid Input....");
				getch();
		}
	}
	
}


void insert()
	{
		system("cls");
		// at first we have to chake queue is full or not 
		if(count==size)
		{
			printf("Circular queue is full.");
		}
		else 
		{
			printf("enter element for queue:");
			scanf("%d",&cqueue[rear]);
			printf("%d was inserted succesfully.",cqueue[rear]);
			rear=(rear+1)%size;//rear point next loction after size rear point first location
			count++;//for counting how many element inserted 
			
		}
		getch();
	}
	
	void delete_ele()
	{
		system("cls");
		// at first we have to chake queue is empty or not 
		if(count==0)
		{
			printf("Circular queue is empty.");
		}
		else
		{
			printf("%d was deleted succesfully.",cqueue[front]);
			front=(front+1)%size;//front point next loction after size front point first location
			count--;
			
		}
		getch();
	}

	void size_of_q()
	{
		system("cls");
		printf("%d element present in the circular queue.",count);
		getch();
	}
	
	void display()
	{
		system("cls");
		if(count==0)
		{
			printf("Circular queue is empty.");
		}
		else
		{
			
			int f=front;
			int r=rear;
			printf("-:printing element of circular queue:-\n");
			while(f<count||count==1)
			{
				printf("queue[%d]:%d\n",f,cqueue[f]);
				f=(f+1)%size;
				if(f==rear)
				break;
			}
		}
		getch();
    } 	
	
	
	

