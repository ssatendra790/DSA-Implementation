#include<stdio.h>
#include<malloc.h>
 
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node  *create(int data){
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
}

struct node *search(struct node *root,int key){
    if(root==NULL){
        return NULL;
    }
     if(root->data == key){
        return root;
    }
    else if(root->data > key){
        return search(root->left,key);
    }
    else{
    return search(root->right,key);
    }
}

int main(){
    int n;
    struct node *p = create(5);
    struct node *p1 = create(3);
    struct node *p2 = create(6);
    struct node *p3 = create(1);
    struct node *p4 = create(4);
    p->left=p1;
    p->right= p2;
    p1->left=p3;
    p1->right = p4;

    printf("Enter the number you want to search in BST :");
    scanf("%d",&n);

    struct node *x = search(p,n); 
    if(x!=NULL){
        printf("Found : %d ",x->data);
    }          
    else{
        printf("Element not Found.");
    }
    return 0;
}