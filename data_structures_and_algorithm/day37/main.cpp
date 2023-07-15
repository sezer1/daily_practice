#include <iostream>

using namespace std;

struct Yigin
{
    int data;
    struct Yigin* next;
};

struct Yigin *ilk=NULL;
struct Yigin *son=NULL;

void sonaekle(int a)
{
 struct Yigin* node=(struct Yigin*)malloc(sizeof(struct Yigin));
 node->data=a;
 if(ilk==NULL)
   {
    ilk=node;
    son=node;
    son->next=NULL;
   }
   else
   {
     son->next=node;
     son=node;
     son->next=NULL;
   }
};

void RecListele(struct Yigin *liste){
  printf("%d\n",liste->data);
  if(liste!=son)
    RecListele(liste->next);

}





int main()
{
   sonaekle(1);
   sonaekle(10);
   sonaekle(14);
   sonaekle(12);
   RecListele(ilk);

    return 0;
}
