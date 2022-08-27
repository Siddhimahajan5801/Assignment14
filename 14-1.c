#include <stdio.h>
int main(){ 
  int num[10],i,sum=0;  

  printf("Enter the numbers : ");

for ( i=0 ; i<10; i++){

    scanf("%d",&num[i]);

    sum=sum+num[i];
}
  
  printf("\nThe sum of all the numbers stored in this array is : %d ",sum);
  
  
return 0; 
}