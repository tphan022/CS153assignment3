
#include "types.h"
#include "user.h"
#include "queue.h"


void create_queue(struct queue* qu) {
  qu->top = 0;
  qu->bot = 0;
  qu->sz = 0;

}

void addto_queue(int num, struct queue* qu) {
  struct node* temp = malloc(sizeof(struct node));

  temp->number = num;
  temp->next = 0;
  
  if(qu->top != 0) {
    qu->bot->next = temp;
  }
  else {
    qu->top = temp;
  }
  
  qu->sz = qu->sz + 1;
  qu->bot = temp;

}


  
