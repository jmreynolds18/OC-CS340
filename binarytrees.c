#include <stdio.h>

// typedef struct{
//  int num;
// }NodeData;

// typedef struct treenode{
//  NodeData data;
//  struct treenode *left, *right;
// }TreeNode, *TreeNodePtr;

// typdef struct{
//  TreeNodePtr root;
// }BinaryTree;

void wequit(){
	printf("We quit\n");
}

int main(){
	int menu = -1;

	while(1){
		printf("Please enter a number: ");
		scanf("%d", &menu);
		

		if (menu == 0){
			wequit();
			break;
		}
		else if(menu == 1){
			printf("add node\n");
		}
		else if(menu == 2){
			printf("print preorder\n");
		}
		else if(menu == 3){
			printf("print inorder\n");
		}
		else if(menu == 4){
			printf("print postorder\n");
		}
		else
			printf("%d is not a menu choice!\n",menu);
	}
}

// void visit(TreeNodePtr node){
//  printf("%d", node -> data.num);
// }

// void inOrder(TreeNodePtr node){
//  void visit(TreeNodePtr);
//  if(node != NULL){
//   inOrder(node -> left);
//   visit(node);
//   inOrder(node -> right);
// }



