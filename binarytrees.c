#include <stdio.h>

typedef struct{
 int num;
}NodeData;

typedef struct treenode{
 NodeData data;
 struct treenode *left, *right;
}TreeNode, *TreeNodePtr;

typdef struct{
 TreeNodePtr root;
}BinaryTree;


main(){

}

void visit(TreeNodePtr node){
 printf("%d", node -> data.num);
}

void inOrder(TreeNodePtr node){
 void visit(TreeNodePtr);
 if(node != NULL){
  inOrder(node -> left);
  visit(node);
  inOrder(node -> right);
}



