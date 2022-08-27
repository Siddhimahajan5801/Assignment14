#include <stdio.h>
int main(){ 
  int num[10],i,min; 

  printf("Enter the numbers : ");
for ( i=0 ; i<10; i++){
    scanf("%d",&num[i]);
}
   
   min=num[0];

   for (i=1; i<10; i++)
    min=min<num[i]?min:num[i]; 
  
  printf("\nThe smallest number stored in this array is : %d ",min);
  
  
return 0; 
}