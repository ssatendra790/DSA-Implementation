#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;

};

struct node *create(int data){
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
    
}
int main(){


  /*  struct node *p;
    p->data = 2;
    p=(struct node*)malloc(sizeof(struct node));
    p->left = NULL;
    p->right = NULL;


    struct node *p1;
    p->data = 1;
    p1=(struct node*)malloc(sizeof(struct node));
    p1->left = NULL;
    p1->right = NULL;
    
    
    struct node *p2;
    p->data = 4;
    p2=(struct node*)malloc(sizeof(struct node));
    p2->left = NULL;
    p2->right = NULL;


    p->left = p1;
    p->right = p2;
    */

   struct node *p = create(2);
   struct node *p1 = create(4);
   struct node *p2 = create(1);

    p->left = p1;
    p->right = p2;

    return 0;
}