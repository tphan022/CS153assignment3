//This is the queue header for creating a queue
// for the semaphore


struct node {
  int number;
  
  struct node* next;

};

struct queue {
  int sz;
  
  struct node* top;
  struct node* bot;
};

void create_queue(struct queue* );
void addto_queue(int, struct queue* );
// int return value will return -1 if function fails
int popoff_queue(struct queue* );
int is_empty(struct queue* );
