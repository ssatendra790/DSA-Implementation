#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
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

// struct node *insert(struct node *root,int key){
//     struct node *prev = NULL;
//     struct node *ptr;

//     while(root!=NULL){
//         prev = root;
//         if(root->data== key){
//             printf("Cannot insert %d , already in BST.\n");
//             return 0;
//         }
//         else if(root->data > key){
//             root = root->left;
//         }
//         else{
//             root= root->right;
//         }
//     }
//     struct node *new =create(key);
//     if(key < prev->data){
//          prev->left = new;
//     }
//     else{
//         prev->right = new;
//     }
// }

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
struct node *inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
struct node *delete (struct node *root, int value)
{
    struct node *iPre;

    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }

    // Search the node to be deleted
    if (value < root->data)
    {
        root->left = delete (root->left, value);
    }
    else if (value > root->data)
    {
        root->right = delete (root->right, value);
    }

    // Deletion strategy when node is found.
    else
    {
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = delete (root->left, iPre->data);
    }
    return root;
}

int main()
{
    int n;
    struct node *p = create(5);
    struct node *p1 = create(3);
    struct node *p2 = create(6);
    struct node *p3 = create(1);
    struct node *p4 = create(4);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inorder(p);
    delete (p, 5);
    printf("\n");
    inorder(p);

    return 0;
}



