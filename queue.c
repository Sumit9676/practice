#include <stdio.h>
#include <stdlib.h>
  
struct Node
{
    int data;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
 
void enqueue(struct Node *f, struct Node *r, int val)
{
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}
 
int dequeue(struct Node *f, struct Node *r,)
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
 
int main()
{
    int x;
    struct Node *f = NULL;
    struct Node *r = NULL;

    linkedListTraversal(f);
    printf("Dequeuing element %d\n",dequeue(f, r));
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    printf("Dequeuing element %d\n",dequeue(f, r));
    printf("Dequeuing element %d\n",dequeue(f, r));
    printf("Dequeuing element %d\n",dequeue(f, r));
    printf("Dequeuing element %d\n",dequeue(f, r));
    linkedListTraversal(f);
    return 0;
}

