#include<stdio.h>

void bubble(int a[],int n){
    int ptr,temp;
    for(int i=0;i<n-1-1;i++){
      ptr=0;
      while(ptr<n-i-1-1){
          if(a[ptr]>a[ptr+1]){
              temp=a[ptr];
              a[ptr]=a[ptr+1];
              a[ptr+1]=temp;
          }
          ptr++;
      }  
    }
}
int main(){
    int n;
    printf("Enter the no of elements in array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubble(a,n);
    printf("Sorted array :: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}