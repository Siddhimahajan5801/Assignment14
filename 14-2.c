#include <stdio.h>
int main(){ 
  int num[10],i,sum=0; 
  float avg; 

  printf("Enter the numbers : ");

for ( i=0 ; i<10; i++){

    scanf("%d",&num[i]);

    sum=sum+num[i];
}
  avg = sum/10.0;
  printf("\nThe average of all the numbers stored in this array is : %.2f ",avg);
  
  
return 0; 
}