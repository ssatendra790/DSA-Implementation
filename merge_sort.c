#include<stdio.h>
#define max 30
void mergesort(int[],int ,int);
void merge(int[],int,int,int);

int main(){
    int a[30],n,i;
    printf("\n No. of element ");
    scanf("%d",&n);
    printf("Enter array element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    mergesort(a,0,n-1);
    printf("\nsorted data"); 

    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
    return 0;
}
void mergesort(int a[],int l,int u)
{
    int m;
    if(l<u){
        m=(l+u)/2;
        mergesort(a,0,m);
        mergesort(a,m+1,u);
        merge(a,l,m,u);
    }
}
void merge(int a[],int l,int m,int u){
    int c[max];
    int i,j,k;
    i=l;j=m+1;k=0;
    while(i<=m&&j<=u){
        if(a[i]<a[j]){
            c[k]=a[i];
            k++,i++;
        }
        else{
            c[k]=a[j];
            k++;j++;
        }
        while(i<=m){
            c[k]=a[i];
            k++,i++;
        }
        while(j<=u){
            c[k]=a[j];
            k++,j++;
        }
        for(i=l,j=0;i<=u;i++,j++){
            a[i]=c[j];
        }
    }
}