#include <stdio.h>
int main(){ 

int n,i;
printf("Enter the total numbers (n) : ");
scanf("%d",&n);

int a1[n];
int a2[n];

printf("Enter the numbers : ");
for ( i=0; i<n; i++){
    scanf("%d",&a1[i]);
}

printf("Numbers of new array : ");
for (i=0; i<n; i++){
    a2[i]=a1[i];
    printf("%d ",a2[i]);
}

return 0; 
}