#include <stdio.h>

int main() {
    int arr[10];
    int count=0,n,i;
    for(i=0;i<10;i++){
    	printf("enter %d number: ",i);
    	scanf("%d",&arr[i]);
	}
	printf("enter number to search: ");
	scanf("%d",&n);
	
	for(i=0;i<10;i++){
		if(arr[i]==n){
			count++;
		}
		
	}
	if(count>0){
   	printf("%d is repeated %d times",n,count);
  }else{
  	printf("number not found ");
  	
  } 
   return 0;
}

