#include <stdio.h>
int main(){ 
    int n,i,j,temp; 

  printf("the total numbers is (n) :");
  scanf("%d",&n);

  int num[n];

  printf("Enter the numbers : ");
for ( i=0 ; i<n; i++){
    scanf("%d",&num[i]);
}
  for (i=0 ; i<n; i++){

    for(j=n; j>n/2; j--){

        temp=num[i];
        num[i]=num[n];
        num[n]=temp;
    }

      }
    
  printf("The numbers of this array in reverse order is : ");
  for (i=0; i<n; i++)
  printf("%d  ",num[n-i]);
  
  
return 0; 
}