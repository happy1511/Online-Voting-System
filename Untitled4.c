#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct candidate{
	
	char name[18];
	char symbol[10];
	int no_of_votes;
	char party_name[10];
	struct candidate *next;
	struct candidate *previous;
};

struct candidate *head;
void main(){
	int n,s,i;
	struct candidate *new_node;
	struct candidate *temp;
	scanf("%d",&n);
	new_node=(struct candidate*)malloc(sizeof(struct candidate));
	
	scanf("%s",&new_node->name);
	scanf("%s",&new_node->party_name);
	 scanf("%s",&new_node->symbol);
	 head=new_node;
	 new_node->previous=NULL;
	 new_node->next=NULL;
	 temp=new_node;
	 
	 for(i=2;i<n;i++){
	 	new_node=(struct candidate*)malloc(sizeof(struct candidate));
		
		scanf("%s",&new_node->name);
	scanf("%s",&new_node->party_name);
	 scanf("%s",&new_node->symbol);
	 new_node->previous=temp;
	 new_node->next=NULL;
	 temp->next=new_node;
	 temp=new_node;
	 }
	 temp=head;
	 while(1){
	 	printf("%s %s %s \n",temp->name,temp->party_name,temp->symbol);
	 	scanf("%d",&s);
	 	if(s==0){
	 		temp=temp->previous;
	 		if(temp==NULL){
	 			printf("\nnnn");
			 }
		 }
		 if(s==1){
		 	temp=temp->next;
		 	if(temp==NULL){
		 		printf("\nnn");
			 }
		 }
	 }
	 
}
