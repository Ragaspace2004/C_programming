# include<stdio.h>
# include<stdlib.h>

struct node{
int data;
struct node *left;
struct node *right;
};
struct node *createnode(int data);
struct node *insert(struct node *root,int val);
void preorder(struct node *root);
void postorder(struct node *root);
void inorder(struct node *root);

int main(){
int data;
struct node *root=NULL;
int ch;
do{
printf("\nChoice:1->insertion\nChoice:2->preorder\nChoice:3->postorder\nChoice:4->inorder");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch){
case 1:
printf("\nEnter the value:");
scanf("%d",&data);
root=insert(root,data);
break;
case 2:
preorder(root);
break;

case 3:
postorder(root);
break;
case 4:
inorder(root);
break;
default:
printf("\nWrong choice");
break;}}
while(ch!=0);
return 0;}



struct node *createnode(int data){
struct node *nn=(struct node*)malloc(sizeof(struct node));
nn->data=data;
nn->left=NULL;
nn->right=NULL;
return nn;
}


//BINARY SEARCH TREE *****

struct node *insert(struct node *root,int val){
if(root==0){
root=createnode(val);}
else if(root->data < val){
root->right=insert(root->right,val);
}
else if(root->data > val){
root->left=insert(root->left,val);
}
return root;
}


void preorder(struct node *root){
if(root==0){
return;}

printf("\t%d",root->data);
preorder(root->left);
preorder(root->right);
}

void postorder(struct node *root){
if(root==0){
return;}
postorder(root->left);
postorder(root->right);
printf("\t%d",root->data);}

void inorder(struct node *root){
if(root==0){
return;}
inorder(root->left);
printf("\t%d",root->data);
inorder(root->right);
}



