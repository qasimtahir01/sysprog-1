#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include  <string.h>
/* A program to demonstrate linked lists
*/   

typedef struct node {
  int data;
  struct node* next;
} node;


/* this function checks if the list is a valid list
   it is able to recognize the broken links
  
*/

int isSegment(node* start, node* end){
  if (start==end) return 1;
  while (start != end){
    if (start==NULL) return 0;
    start = start->next;
  }
  
  return 1;
}


node* reverse(node* head){

  return NULL;

}




node* append(node* N, node* head){
  if (head==NULL) return N;
  head->next = append(N, head->next);
  return head;    
}




void print(node*); /* prototype*/

/* create a new node from n and retrun a pointer */
node* new_node(int n){
  node* ptr = malloc(sizeof(node));
  assert(ptr!=NULL);
  ptr->data = n;
  ptr->next = NULL;
  return ptr;
}


int main(int argc, char* argv[]){
  node* N= new_node(10);
  node*  head = NULL;
  head=append(N,head);
  head = append(new_node(12),head);
  head = append(new_node(14),head);

  print(head);
  return 0;
} 

void print(node* ptr){
  if (ptr==NULL) printf("NULL\n");
  else {  
    printf("%d ", ptr->data);
    print(ptr->next);
  }   
}
