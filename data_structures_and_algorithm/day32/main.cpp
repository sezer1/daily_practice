#include <iostream>
#include <string.h>

using namespace std;

struct Kisi
{
 char isim[10];
 struct Kisi *sonra;
};

struct Kisi *kok;
int kapasite=10;
struct Kisi yigin[10];
int SP;

struct Kisi *Push(string isim)
{
    struct Kisi *pointer =(struct Kisi*)malloc(sizeof(Kisi));
    if(pointer !=NULL){
        strncpy(pointer->isim, isim.c_str(), sizeof(pointer->isim) - 1);
         pointer->isim[sizeof(pointer->isim) - 1] = '\0';
         pointer->sonra = kok;
         kok = pointer;
    }
 return pointer;
}


int main()
{

  struct Kisi *p;
  p=Push("Ahmet");
 printf("%s",p->isim);
 return 0;
}
