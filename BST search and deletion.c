#include<stdio.h>
#include<stdlib.h>
struct node
{
 int key;
struct node *left,*right;
}*root,*temp=NULL;
struct node *getnode(int x)
{
 struct node *nn=(struct node*)malloc(sizeof(struct node));
 nn->key=x;
 nn->left=NULL;
 nn->right=NULL;
 return nn;
}
struct node *search(struct node *root,int x)
{
 if(root==NULL)
 return NULL;
 if(root->key < x)
 return search(root->right,x);
 else if(root->key > x)
 return search(root->left,x);
 else
 return root;
}
struct node *findmin(struct node *root)
{
 if(root==NULL)
 return root;
 else if(root->left!=NULL)
 return findmin(root->left);
 return root;
}
struct node *findmax(struct node *root)
{
 if(root==NULL)
 return root;
 else if(root->right!=NULL)
 return findmax(root->right);
 return root;
}
void inorder(struct node *root)
{
 if(root!=NULL)
 {
 inorder(root->left);
 printf("%d->",root->key);
 inorder(root->right);
 }
}
struct node *insert(struct node *root,int x)
{
 if(root==NULL)
 return getnode(x);
 else if(root->key < x)
 root->right=insert(root->right,x);
 else
 root->left=insert(root->left,x);
 return root;
}
struct node *delete(struct node *root,int x)
{
 if(root==NULL)
 return NULL;
 if(root->key<x)
 root->right=delete(root->right,x);
 else if(root->key>x)
 root->left=delete(root->left,x);
 else
 {
 //No children
 if(root->left==NULL && root->right==NULL)
 {
 free(root);
 return NULL;
 }
 else if(root->left==NULL || root->right==NULL)
 {
 if(root->left==NULL)
 temp=root->right;
 else
 temp=root->left;
 free(root);
 return temp;
 }
 else
 {
 temp=findmin(root->right);
 root->key=temp->key;
 root->right=delete(root->right,temp->key);
 }
 }
 return root;
}
int main()
{
 root=NULL;
 int data,ch;
 while(1)
 {
 printf("\n1.Insert\n2.Delete\n3.Search\n4.Findmin\n5.Findmax\n");
 printf("Enter the choice:\n");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 printf("Enter the element to be inserted:\n");
 scanf("%d",&data);
 root=insert(root,data);
 printf("Element is inserted");
 inorder(root);
 break;
 case 2:
 printf("Enter the element to be deleted:\n");
 scanf("%d",&data);
 root=delete(root,data);
 printf("After deleting %d\n the tree will be\n",data);
 inorder(root);
 break;
 case 3:
 printf("Enter the element to be searched\n");
 scanf("%d",&data);
 root=search(root,data);
 if(root!=NULL)
 printf("Element %d is found\n",data);
 else
 printf("Element not found\n");
 break;
 case 4:
 temp=findmin(root);
 printf("Minimum element is %d",temp->key);
 break;
 case 5:
 temp=findmax(root);
 printf("Maximum element is %d\n",temp->key);
 break;
 default:
 printf("Invalid choice\n");
 break;
 }
 }
 return 0;
}
