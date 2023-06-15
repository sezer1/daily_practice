#include <iostream>

using namespace std;


struct Dugum {
  int digit;
  struct Dugum* next;

};
struct Dugum *head = NULL;
struct Dugum *son = NULL;

void head_insertion(int data){

   struct Dugum *p = (struct Dugum*)malloc(sizeof(Dugum));

   p->digit=data;
   p->next=head;
   head=p;

}

void delete_insertion(){

  struct Dugum *p = head;

    while(p != NULL) {
    p = p->next;

}
            p=p->next;
            p->next=son;


}


void printlinkedlist(){

  struct Dugum *p = head;
   cout << "\n[";

   //start from the beginning
   while(p != NULL) {
      cout << " " << p->digit << " ";
      p = p->next;
   }
   cout << "]";


}

int main()
{

      head_insertion(5);
      head_insertion(12);
      head_insertion(3);
      head_insertion(7);
      delete_insertion();
      printlinkedlist();

    return 0;
}
