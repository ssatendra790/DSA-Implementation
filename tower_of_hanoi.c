#include<stdio.h>

void hanoi(int n,char beg,char aux,char end){
   if(n==1){
       printf("Move disc from %c to %c\n",beg,end);
   }
   else{
       hanoi(n-1,beg,end,aux);
       hanoi(1,beg,aux,end);
       hanoi(n-1,aux,beg,end);
   }
}
int main(){
int n;
char A,B,C;
     printf("Enter no of discs : ");
     scanf("%d",&n);
     printf("\nTower of Hanoi for %d discs : \n",n);
     hanoi(n,'A','B','C');
    return 0;
}