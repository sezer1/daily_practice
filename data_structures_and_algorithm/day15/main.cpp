#include <iostream>

using namespace std;

//linked list
//dynamic memory usage & object oriented programing
//burada biraz vakit geçiricez

struct Dugum
{

 int veri;
 struct Dugum *sonraki;

};




int main()
{


    Dugum *root;


    root = new Dugum;
    root ->sonraki =0;
    root ->veri = 12;




   printf("%d",root->veri);




    return 0;
}
