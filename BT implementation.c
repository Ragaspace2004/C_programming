#include <stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *left,*right;
};
struct node *createnode(int data)
{
 struct node *nn=(struct node*)malloc(sizeof(struct node));
 nn->data=data;
 nn->left=NULL;
 nn->right=NULL;
 return nn;
}
struct node *insertnode(struct node *root, int val)
{
 if(root == NULL)
 return createnode(val);

 if(root->data < val)
 root->right = insertnode(root->right,val);

 if(root->data > val)
 root->left = insertnode(root->left,val);

 return root;
}
void inorder(struct node *root)
{
 if(root==0)
 return;
 inorder(root->left);
 printf("%d\t",root->data);
 inorder(root->right);
}
void preorder(struct node *root)
{
 if(root==0)
 return;
 printf("%d\t",root->data);
 preorder(root->left);
 preorder(root->right);
}
void postorder(struct node *root)
{
 if(root==0)
 return;
 postorder(root->left);
 postorder(root->right);
 printf("%d\t",root->data);
}
int main() {
 // Write C code here
 struct node *root=NULL;
 int ch,data;
 do
 {
 printf("\nMenu:\n1.Create a node\n2.Inorder\n3.Preorder\n4.Postorder\n");
 printf("Enter the choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 printf("\nEnter the node:");
 scanf("%d",&data);
 root=insertnode(root,data);
 break;
 case 2:
 printf("\nInorder traversal:\t");
 inorder(root);
 break;
 case 3:
 preorder(root);
 break;
 case 4:
 postorder(root);
 break;
 default:
 printf("Invalid choice\n");
 }
 }while(ch!=0);
 return 0;
}
