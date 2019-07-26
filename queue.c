// queue datastructure 
//FIFO
//operation 
//1.insert element 
//2.delete element 
//3.display element

//front mandatory it should point alawya point first location
//rear mandatory it initally rear point first location because queue is empty

# include<stdio.h>
# include<stdlib.h>
# include<conio.h>
// global veriable declair
int size;
int *queue;
int front=0,rear=0;


// insert function delair;
void insert()
{
	system("cls");
	//chake queue is ull or not
	if(rear==size)// because queue start with 0 index and continue size-1 index
	{
		printf("Queue is full.");
		getch();
	}
	else
	{
		int ele;
		printf("enter a element/data for queue:");
		scanf("%d",&ele);
		// when we insert element in queue we should took te help of rear 
		// insert element in queue
		queue[rear]=ele;
		rear++;
		printf("\n%d was inserted successfully.",ele);
		getch();
		
	}
	
}

//delete_ele function declair
 void delete_ele()
 {
 	system("cls");
 	if(front==rear)
 	{
 		//chake queue is empty or note
 		printf("Queue is empty.");
 		getch();
	 }
	 else
	 {
	 	int i;
	 	printf("%d is deleted successfully.",queue[front]);
	 	//we need to shift all the element
		 for(i=0;i<rear-1;i++)
		 {
		 	queue[i]=queue[i+1];
		 	
		 }
		 rear--;
	 	getch();
	 }
 	
 }
 
 //display element
 void display()
 {
 	system("cls");
 	//chake queue is empty or not
 	if(front==rear)
 	{
 		printf("Queue is empty.");
 		getch();
	 }
	 else
	 {
	 	int i;
	 	printf("Queue elements are: ");
	 	for(i=front;i<rear;i++)
	 	{
	 		printf("\nQueue[%d]:%d",i,queue[i]);
		}
		getch();
	 }
 	
 	
 }




int main()
{
	int choice;
	printf("enter queue size that you want:");
	scanf("%d",&size);
	//allocate mamory for queue
	queue=(int *)calloc(size,sizeof(int));
	
	while(1)
	{
	system("cls"); 
	printf("\t\t..............................................\n");
	printf("\t\t:--------------------------------------------:\n");
	printf("\t\t:     WELLCOME TO QUEUE IMPLEMENTATION       :\n");
	printf("\t\t:   ====================================     :\n");
	printf("\t\t:   	 DESIGN BY SOUMADIP DEY              :\n");
	printf("\t\t:   ====================================     :\n");
	printf("\t\t:        1.INSERT AN ELEMENT                 :\n");
	printf("\t\t:        2.DELETE AN ELEMENT                 :\n");
	printf("\t\t:        3.PRINT THE QUEUE                   :\n");
	printf("\t\t:        4.QUIT                              :\n");
	printf("\t\t:--------------------------------------------:\n");
	printf("\t\t:............................................:\n");
	printf("\n\t\t      :: enter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{
				system("cls");
				//call insert function
				insert();
				break;
			}
		case 2:
			{
				system("cls");
				//call delete_ele function
				delete_ele();
				break;
				
			}
		case 3:
			{
				system("cls");
				//call display function
				display();
				break;
				
			}
		case 4:
			{
				exit(0);
				break;
			}
		default:
			{
				printf("\t\t   invalid input. please try agin...");
				fflush(stdin);
				getch();
			}
	
	
	}
	
	}
	
	
	
	return 0;
}
