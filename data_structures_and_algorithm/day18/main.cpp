#include <iostream>

using namespace std;


struct Dugum {
  int digit;
  struct Dugum* next;

};
struct Dugum *head = NULL;
struct Dugum *son = NULL;

void insertion(int data){

   struct Dugum *p = (struct Dugum*)malloc(sizeof(Dugum));
   p->digit=data;
   p->next=head;
   head=p;


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

   insertion(5);
    insertion(12);
     insertion(3);
      insertion(7);
      printlinkedlist();

    return 0;
}
