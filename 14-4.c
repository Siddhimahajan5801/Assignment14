#include <stdio.h>
int main(){ 
  int num[10],i,max; 

  printf("Enter the numbers : ");
for ( i=0 ; i<10; i++){
    scanf("%d",&num[i]);
}
   
   max=num[0];

   for (i=1; i<10; i++)
    max=max>num[i]?max:num[i]; 
  
  printf("\nThe greatest number stored in this array is : %d ",max);
  
  
return 0; 
}