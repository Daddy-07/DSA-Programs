#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*START=NULL;

//Insert/create..

void insertFirst(){
	int value;
	struct node *p;

	p=malloc(sizeof(struct node));
	printf("Enter Node Data: ");
	scanf("%d", &value);

	p->data=value;
	p->next=NULL;

	if(START==NULL){
		START=p;
	}
	
	else{
		p->next=START;
		START=p;
	}
}
// Delete.

void deleteFirst(){
	struct node *t;

	if(START==NULL){
		printf("Linked List Is Empty!! ");
	}
	
	else{
		t=START;
		START=t->next;
		t->next=NULL;
		free(t);
	}
}

//Display List.

void displayList(){
	struct node *t;
	
	if(START==NULL){
		printf("Linked List Is Empty!! ");
	}

	else{
		printf("Given List Is: ");
		t=START;
		while(t != NULL){
			printf("%d\t",t->data);
			t=t->next;
		}
	}
}

//Countnodes

void countNodes(){
	struct node *t;
	int count=0;
	
	if(START==NULL){
		printf("Linked List Is Empty!! ");
	}

	else{
		t=START;
		while(t != NULL){
			count++;
			t=t->next;
		}
		printf("Total Nodes Are : %d ", count);
	}
}

//EvenNodes

void evenNodes(){
	struct node *t;

	if(START== NULL){
		printf("Linked List Is Empty!! ");
	}

	else{
		printf("Even No's in the Node's Are: ");
		t=START;
		while(t != NULL){
			if(t->data % 2 == 0){
				printf("%d\t",t->data);
			}
			t=t->next;
		}
	}
}

//OddNodes

void oddNodes(){
	struct node *t;

	if(START==NULL){
		printf("Linked List Is Empty!! ");
	}

	else{
		printf("Odd No's in the Node's Are: ");
		t=START;
		while(t != NULL){
			if(t->data % 2 != 0){
				printf("%d\t", t->data);
			}
		    t=t->next;
		}
	}
}

//Minimum

void minNode(){
	struct node *t;
	int min;

	if(START==NULL){
		printf("Linked List Is Empty!! ");
	}
	
	else{
		t=START;
		min=t->data;
		while(t != NULL){
			if(min > t->data){
				min=t->data;
			}
			t=t->next;
		}
		printf("The Smallest Element from node is %d\t", min);
	}
}

//Maximum 

void maxNode(){
	struct node *t;
	int max;

	if(START==NULL){
		printf("Linked List Is Empty!! ");
	}

	else{
		t=START;
		max=t->data;
		while(t != NULL){
			if(max < t->data){
				max=t->data;
			}
			t=t->next;
		}
		printf("The Largest Element from node is %d\t", max);
	}
}

//main function

int main(){
	int size, i, ch, again=1, sub=1, ch1 ;

	main_menu:
			while(again==1){
				printf("\n==== MAIN MENU ====\n");
				printf("1. Create/Insert. \n");
				printf("2. Deletion. \n");
				printf("3. Traversing Operations. \n");
				printf("4. Display Linked List. \n");
				printf("5. Count Nodes. \n");
				printf("6. Exit.\n");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1: while(sub==1){
							printf("1. Create Nodes.\n");
							printf("2. Insert at First Position.\n");
							printf("3. Insert at Given Position. \n");
							printf("4. Insert at Last Position.\n");
							printf("5. Main Menu. \n");
							printf("6. Exit. \n");
							scanf("%d",&ch1);
							switch(ch1)
							{
								case 1: printf("Enter Size of a List: \n");
									scanf("%d",&size);
									for(i=1;i<=size;i++){
										insertFirst();
									}
									break;
                                case 2:
									insertFirst();
									break;
                                case 3:
                                    printf("Work In Progress !!");
                                    break;
                                case 4:
                                    printf("Work In Progress !!");
                                    break;
                                case 5:
                                    goto main_menu;
                                case 6:
                                    printf("Thank You !! ");
                                    exit(0);
                                    break;
                                default:
                                    printf("Invalid Choice\n");
                                    break;
							}
						}
                        break;
                    case 2:while(sub==1){
                        printf("1. Delete from First Position.\n");
                        printf("2. Delete from Given Position. \n");
                        printf("3. Delete from Last Position.\n");
                        printf("4. Main Menu. \n");
                        printf("5. Exit. \n");
                        scanf("%d",&ch1);
                        switch(ch1)
                        {
                            case 1: deleteFirst();
                                    break;
                                case 2:
                                    printf("Work In Progress !!");
                                    break;
                                case 3:
                                    printf("Work In Progress !!");
                                    break;
                                case 4:
                                    goto main_menu;
                                case 5:
                                    printf("Thank You !! ");
                                    exit(0);
                                    break;
                                default:
                                    printf("Invalid Choice\n");
                                    break;
                        }
                    }
                    break;
                    case 3:while(sub==1){
                        printf("1. Even No's From Nodes\n");
                        printf("2. Odd No's From Nodes\n");
                        printf("3. Smallest No From Nodes \n");
                        printf("4. Largest No From Nodes \n");
                        printf("5. Main Menu. \n");
                        printf("6. Exit. \n");
                        scanf("%d",&ch1);
                        switch(ch1)
                        {
                            case 1: evenNodes();
                                    break;
                                case 2:
                                    oddNodes();
                                    break;
                                case 3:
                                    minNode();
                                    break;
                                case 4:
                                    maxNode();
                                    break;
                                case 5:
                                    goto main_menu;
                                case 6:
                                    printf("Thank You !! ");
                                    exit(0);
                                    break;
                                default:
                                    printf("Invalid Choice\n");
                                    break;
                        }
                    }
                    break;
                    case 4: displayList();
                            break;
                    case 5: countNodes();
                            break;
                    case 6: printf("Thank You !! ");
                            exit(0);
                            break;      
                    default: printf("Invalid Choice\n");
                            break;      
				}
			}
}
