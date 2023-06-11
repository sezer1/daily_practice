#include <iostream>

using namespace std;

struct Dugum {
 int digit;
 struct Dugum *next;

};


int main()
{
    struct Dugum *p;
    struct Dugum *p2;
    struct Dugum *p3;

    p= new Dugum;
    p->digit=5;
    p2= p->next;
    p2=new Dugum;
    p2->digit=6;
    p3= p2->next;
    p3=new Dugum;
    p3->digit=7;
    p3->next=NULL;

    return 0;
}
