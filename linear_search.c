#include<stdio.h>

int main(){
    int a[100],n,c,count=0;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
   printf("Enter  elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter  number you want to search in array :");
    scanf("%d",&c);

for(int i=0;i<n;i++){
    if(a[i]==c){
    printf("%d\n",i+1);
    count++;
    }
}
if(count==0){
    printf("Not Found!");
}
    return 0;
}