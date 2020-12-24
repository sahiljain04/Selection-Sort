#include <stdio.h>

int main(void) {
  int j,N,i,temp,a[10];
  printf("Enter the size of the array");
  scanf("%d",&N);
  printf("Enter the elements into the array");
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }
  printf("The elemnts in the array are :");
  for(i=0;i<N;i++){
    printf("%d ",a[i]);
  }
  for(j=0;j<N;j++){
  for(i=0;i<N;i++){
    if(a[i]>=a[i+1]){
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
    else
      continue;
  }
  }
  printf("\nAfter sorting the array :");
  for(i=0;i<N;i++){
    printf("%d ",a[i]);
  }
  return 0;
}