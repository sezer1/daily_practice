#include <iostream>

using namespace std;

struct Lnkd_query {
     int data;
     struct Lnkd_query *next;
};


struct Lnkd_query *last=NULL;

struct Lnkd_query *head=NULL;
struct Lnkd_query *previous=NULL;


struct Lnkd_query *Push(int dt){
     struct Lnkd_query *p=(struct Lnkd_query*)malloc(sizeof(Lnkd_query));

     p->data=dt;
     last=p->next;
     previous=p;

};

int main()
{

 struct Lnkd_query *point=(struct Lnkd_query*)malloc(sizeof(Lnkd_query));

 point=Push(5);

 printf("%d",point->data);


    return 0;
}
