#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include  <string.h>
/* A program to demonstrate linked lists
   wrapped inside a struct
*/   

typedef struct node {
  int data;
  struct node* next;
} node;

struct list {
  node *head, *last;
  int size;
};
  


typedef struct list* list;

 

/* this function checks if the list is a valid list
   it is able to recognize the broken links
   complete this 
*/

int isSegment(list* L, node* start, node* end){

  return 0;
}


/* reverses the list */
void reverse(list* L){
  

  return NULL;
}



node* append(node* N, list* L){

    
}




void print(list*); /* prototype*/


node* new_node(int n){
  node* ptr = malloc(sizeof(node));
  ptr->data = n;
  ptr->next = NULL;
  return ptr;
}


int main(int argc, char* argv[]){
  
  return 0;
} 

/* write an iterative function */

void print(list* listptr){
     


}
