#include<stdio.h>

int main(){
    int a[100],pos,x,n;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter no u wnt to insert :");
    scanf("%d",&x);
    printf("Enter position: ");
    scanf("%d",&pos);

    n++;
    pos=pos-1;
    for(int i=n-1;i>=pos;i--){
        a[i]=a[i-1];
    }
     a[pos]=x;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}