#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *right_child;
    struct node *left_child;
};
struct node* insert(struct node*, int);
struct node* delete(struct node*, int );
struct node* search(struct node*,int );
void preorder(struct node*);
void postorder(struct node*);
void inorder(struct node*);
struct node* new_node(int);
struct node* find_minimum(struct node*);
int main()
{
    int choice,want_continue,x,temp,key;
    struct node *root = NULL,*r;
    printf("Enter the choice 1.insert,2.delete,3.search,4.preorder,5.postorder,6.inorder\n");
    do{
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("Enter the element to be inserted:");
            scanf("%d",&x);
            root = insert(root,x);
            break;
            case 2:printf("Enter the element to be deleted:");
            scanf("%d",&x);
            root = delete(root,x);
            break;
            case 3:printf("Enter the key:");
            scanf("%d",&key);
            r = search(root,key);
            if(r != NULL)
                printf("Successful search");
            else
                printf("unsuccessful search");
                
            break;
            case 4:inorder(root);
            break;
            case 5:preorder(root);
            break;
            case 6:postorder(root);
            break;
            }
        printf("want to continue,enter 1:");
        scanf("%d",&want_continue);
    }while(want_continue==1);

    return 0;
}
//INSERTION
struct node* insert(struct node *root, int x)
{ 
    if(root==NULL)
      return new_node(x);
    else if(x>root->data)
           root->right_child = insert(root->right_child, x);
    else
        root->left_child = insert(root->left_child,x);
    return root;
}
struct node* new_node(int x)
{
struct node *p;
p = malloc(sizeof(struct node));
p->data = x;
p->left_child = NULL;
p->right_child = NULL;
return p;
}
//PROCESS BEFORE DELETION
struct node* find_minimum(struct node *root)
{
if(root == NULL)
return NULL;
else if(root->left_child != NULL)
// node with minimum value will have no left child
return find_minimum(root->left_child);
// left most element will be minimum
return root;
}
//DELETION
struct node* delete(struct node *root, int x)
{
//searching for the item to be deleted
if(root==NULL)
return NULL;
if (x>root->data)
root->right_child = delete(root->right_child, x);
else if(x<root->data)
root->left_child = delete(root->left_child, x);
else
{
//No Children
if(root->left_child==NULL && root->right_child==NULL)
{
free(root);
return NULL;
}
//One Child
else if(root->left_child==NULL || root->right_child==NULL)
{
struct node *temp;
if(root->left_child==NULL)
temp = root->right_child;
else
temp = root->left_child;
free(root);
return temp;
}
//Two Children
else
{
struct node *temp = find_minimum(root->right_child);
root->data = temp->data;
root->right_child = delete(root->right_child, temp->data);
}
}
return root;
}
//SEARCH
struct node* search(struct node *root, int x)
{
if(root==NULL || root->data==x)
//if root->data is x then the element is found
return root;
else if(x>root->data)
// x is greater, so we will search the right subtree
return search(root->right_child, x);
else
//x is smaller than the data, so we will search the left subtree
return search(root->left_child,x);
}
void preorder(struct node* root){
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left_child);
    preorder(root->right_child);
}
void postorder(struct node* root){
    if (root == NULL)
        return;
    postorder(root->left_child);
    postorder(root->right_child);
    printf("%d ", root->data);
}
void inorder(struct node* root){
    if (root == NULL)
        return;
    inorder(root->left_child);
    printf("%d ", root->data);
    inorder(root->right_child);
}
