#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node{
 int num;
 struct node *next;
}Node, *NodePtr;

main(){
 void printList(NodePtr);
 NodePtr addNode();
 NodePtr makeNode(int);
 int n;
 NodePtr top, np;
 
 top = NULL;
 if (scanf("%d", &n) !=1) n=0;
 
 while(n!=0){
   np = makeNode(n);
   addNode(&top, np);
  if (scanf("%d",&n)!=1) n=0;
 }
 printList(top);
// printf("INT_MAX: %d\n", np -> num); this just takes whatever is at the top of the list and prints it.
// printf("INT_MIN: %d\n", );
}

NodePtr addNode(NodePtr *top, NodePtr np){
   np -> next = *top;
   *top = np;
} 

NodePtr makeNode(int n){
 NodePtr np = (NodePtr) malloc(sizeof (Node));
 np -> num = n;
 np -> next = NULL;
 return np;
}

void printList(NodePtr np){
 while (np !=NULL) {        //as long as there's a node here
  printf("%d\n", np -> num); 
   np = np -> next;         //go on to the next node
 }
}

//max min needs to be a nodeptr to top and max min needs to be a function.
