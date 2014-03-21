#include <stdio.h>
#include <stdlib.h>

typedef struct node{
 int num;
 struct node *next;
}Node, *NodePtr;

main(){
 void printList(NodePtr);
 NodePtr addNode(NodePtr top, NodePtr np, int n, NodePtr makeNode());
 NodePtr makeNode(int);
 int n;
 NodePtr top, np;
 
 top = NULL;
 if (scanf("%d", &n) !=1) n=0;
 while(n!=0){
  np = makeNode(n);	     //makes a new node which contains n
  np -> next = top;	     //sets top if first node
  top =np;                   //set top to point to new node
  if (scanf("%d",&n)!=1) n=0;
 }
 printList(top);
}

NodePtr addNode(NodePtr top, NodePtr np, int n, NodePtr makeNode()){
 np = makeNode(n);
 np -> next = top;
 top = np;
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
