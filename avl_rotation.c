#include<stdio.h>
#include<stdlib.h>

struct node{
    int key;
    struct node *left;
    struct node *right;
    int height;
};

int getHeight(struct node *n){
      if(n==NULL)
      return 0;
      return n->height;
}

struct node *create(int key){
     struct node * node = (struct node*)malloc(sizeof(struct node));
     node->key = key;
     node->left=NULL;
     node->right=NULL;
     node->height =1;
     return node;
}
    int getBalanceFactor(struct node *n){
        if(n==NULL){
            return 0;
        }
        
    }
int main(){
    
    return 0;
}