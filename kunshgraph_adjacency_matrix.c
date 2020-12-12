#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,v,e,j;
	printf("Enter Number of vertices \n");
	scanf("%d",&v);
	printf("Enter number of edges \n");
	scanf("%d",&e);
	int arr[100][100];
	int a,b;
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			arr[i][j]=0;
		}
	}
	for(i=0;i<e;i++){
		printf("Enter edge pair\n");
		scanf("%d %d",&a,&b);
		if(arr[a][b]==0&& arr[b][a]==0){
			arr[a][b]=1;
			arr[b][a]=1;
		}else{
			printf("Duplicate edge \n");
			i--;
		}
	}
	for(i=0;i<v;i++){
		printf("%d->",i);
		for(j=0;j<v;j++){
			if(arr[i][j]==1){
				printf("%d ->",j);
			}
		}
		printf("\n");
	}
}
