#include <iostream>

using namespace std;

//linked list
//dynamic memory usage & object oriented programing


struct Dugum
{

 int veri;
 struct Dugum *sonraki;

};

int main()
{

    Dugum *root;
    Dugum *root1;
    Dugum *root2;
    root = new Dugum;
    root->sonraki
    root1=new Dugum;
    root1->veri=16;



   printf("%d",root->veri);
    return 0;
}
