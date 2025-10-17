#include<stdio.h>
int main(){
	int arr[10];
	int i,sub=0;

	for(i=0;i<10;i++){
		printf("enter %d number",i);
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	int max=arr[0];
   for(i=0;i<10;i++){
   	
   	if(max<arr[i]){
   		max=arr[i];
	   }
	   }
   
   printf("the maximum value is: %d \n",max);
    for(i=0;i<10;i++){
   	
   if(min>arr[i]){
   		min=arr[i];
	   }
	   }

printf("the min value is: %d \n",min);

sub=max-min;
printf("difference between maximum and minimum is: %d \n",sub);
return 0;
}
