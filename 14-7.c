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

    for (j=i+1 ; j<n; j++){

      if (num[i]>num[j]){

        temp=num[i];
        num[i]=num[j];
        num[j]=temp;

      }
    }
  }
  printf("The second largest number in this array is : %d ",num[n-2]);
  
  
return 0; 
}