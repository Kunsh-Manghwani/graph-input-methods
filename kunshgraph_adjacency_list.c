#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
}*tptr;
int main(){
	int i;
	struct node* arr[100];
	for(i=0;i<100;i++){
		arr[i]=NULL;
	}
	printf("Number of vertices in graph \n");
	int v,e;
	scanf("%d",&v);
	int a,b;
	printf("Number of Edges in graph \n");
	scanf("%d",&e);
	for (i=0;i<e;i++){
		scanf("%d %d",&a,&b);
		// for a--b
		struct node* ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=b;
		ptr->next=NULL;
		if(arr[a]==NULL){
			arr[a]=ptr;
		}else{
			tptr=arr[a];
			while(tptr->next !=NULL){
				tptr=tptr->next;
			}
			tptr->next=ptr;
		}
		// for b--a
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=a;
		ptr->next=NULL;
		if(arr[b]==NULL){
			arr[b]=ptr;
		}else{
			tptr=arr[b];
			while(tptr->next !=NULL){
				tptr=tptr->next;
			}
			tptr->next=ptr;
		}
	}
	for(i=0;i<v;i++){
		tptr=arr[i];
		printf("%d ->",i);
		while(tptr!=NULL){
			printf("%d ->",tptr->data);
			tptr=tptr->next;
		}
		printf("\n");
	}
	}

