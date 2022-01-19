
#ifndef pq
#define pq
typedef struct nodepq {
    char data[2];
 
    // Lower values indicate higher priority
    int priority;
 
    struct nodepq* next;
 
} Npq;

int isEmpty(Npq** head);
void push(Npq** head,int src, int dest, int p);
void pop(Npq** head);
Npq* peek(Npq** head);
Npq* newNode(int src,int dest, int p);
#endif