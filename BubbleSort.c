#include<stdio.h>

void BubbleSort(int* a,int n);               //Bubble sort algorithm

int main(){
   int i,n;
   int arr[n];
   printf("Enter the number of elements:");
   scanf("%d",&n);
   for(i=0;i<=n-1;i++) scanf("%d",&arr[i]);
   BubbleSort(arr,n);
    for(i=0;i<=n-1;i++)  printf("%d ",arr[i]);

return 0;
}

void BubbleSort(int* arr,int n){
	int i,j,temp;
	
	  for(i=1;i<=n-1;i++){                   //pass
		    for(j=0;j<=n-1-i;j++){           //compare
				if(arr[j]>arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
	  }
	
	
	
}