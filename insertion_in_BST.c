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


// struct node *search(struct node *root,int key){
//    while(root!=NULL){
//     if(root->data == key){
//         return root;
//     }
//     else if(root->data > key){
//         root = root->left;
//     }
//     else{
//         root=root->right;
//     }
//    }
//    return NULL;
// }

struct node *insert(struct node *root,int key){
    struct node *prev = NULL;
    struct node *ptr;

    while(root!=NULL){
        prev = root;
        if(root->data== key){
            printf("Cannot insert %d , already in BST");
            return root;
        }
        else if(root->data > key){
            root = root->left;
        }
        else{
            root= root->right;
        }
    }
    struct node *new =create(key);
    if(key < prev->data){
         prev->left = new;
    }
    else{
        prev->right = new;
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
   
    insert(p,7);
      printf("%d " ,p->right->right->data);
    return 0;
}