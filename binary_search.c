#include<stdio.h>


int binary(int c,int a[],int lb,int up){
     int mid,beg,end,x; 
    beg=lb;
    end=up;
    mid=beg+end/2;
    while(beg<=end && mid!=c){
        if(c<a[mid]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
        mid=(beg+end)/2;
    } 
    if(a[mid]==c){
        x=mid;  
    }
    else{
        x= -1;
    }
    return x;
}

int main(){
     int n,c,loc;
    //  int a[10]={1,2,3,4,5,6,7,8,9,10};
     
    printf("Enter the no of elements in array : ");
    scanf("%d",&n);
    int a[n];
    int lb=0,up=n-1;
    printf("Enter the elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter no you want to search : ");
    scanf("%d",&c);

    loc=binary(c,a,lb,up);
    if(loc==-1){
        printf("Number is not present in the list.\n");
    }
    else{
        printf("Location of searched element is : %d ",loc);
    }

    return 0;
}