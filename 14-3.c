#include <stdio.h>
int main(){ 
  int num[10],i,se=0,so=0;  

  printf("Enter the numbers : ");

for ( i=0 ; i<10; i++){

    scanf("%d",&num[i]);

    if (num[i]%2==0)
    se=se+num[i];

    else
    so=so+num[i];
    
}
  
  printf("\nThe sum of all the even numbers stored in this array is : %d ",se);
  printf("\nThe sum of all the odd numbers stored in this array is : %d ",so);
  
return 0; 
}