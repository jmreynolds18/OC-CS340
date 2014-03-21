#include<stdio.h>
#include<stdib.h>

typedef struct node{
 int num;
 struct node *next;
}Node, *NodePtr;

main(){
 void printList(NodePtr);
 NodePtr addInPlace(NodePtr, int);
 int n;
 
 NodePtr top = NULL;
 if(scanf("%d", &n) !=1) n=0;
 while(n!=0){
  top = addInPlace(top, n);
  if(scanf("%d", &n) !=1) n=0;
 }
 printList(top);
}

NodePtr addInPlace(NodePtr top, int n){
 NodePtr np, curr, prev, makeNode(int)'
 
 np = makeNode(n);
 prev = NULL;
 curr = top;
 while(curr != NULL && n > curr -> num) {
  prev = curr;
  curr = curr -> next;
 }
 if (prev == NULL){
  np -> next = top;
  return np;
 }
 np -> next = curr;
 prev -> next = np;
 return top;
}
NodePtr makeNode(int n){
 NodePtr np = (Node
