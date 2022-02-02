#include<stdio.h>

void swap(int *a, int*b){
    int temp= *a;
    *a= *b;
    *b=temp; 
}

void sorting(int a[],int n){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
            swap(&a[min],&a[i]);
        }
    }
}
int main(){
    int a[100],n;
    printf("Enter number of elements of array: ");
    scanf("%d",&n);
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   sorting(a,n);
   printf("Sorted array :");
   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }
    
    return 0;
}