#include <iostream>

using namespace std;


struct node{

int data;
struct node *next;
struct node *prev;
};

int main()
{
   struct node *p=(node*) malloc(sizeof(struct node));

   struct node *pi=(node*) malloc(sizeof(struct node));
   p->data=5;
   pi->data=6;

   p->next=pi;
   pi->prev=p;

   printf("%d",pi->prev->data);





    return 0;
}
