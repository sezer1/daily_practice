#include <iostream>

using namespace std;



struct Yigin {
int SP;
unsigned kapasite;
int *dizi;
};

struct Yigin* yigin_olustur(unsigned kapasite){

    struct Yigin *arraytype = (struct Yigin*)malloc(sizeof(Yigin));
    arraytype->kapasite=kapasite;
    arraytype->SP=-1;
    arraytype->dizi=(int*)malloc(sizeof(kapasite));
    return arraytype;

}

int isempty(struct Yigin* yigin){
    if(yigin->SP==-1)
   return 0;
return 1;

}



int main()
{
  struct Yigin *arraytype = (struct Yigin*)malloc(sizeof(Yigin));
   arraytype=yigin_olustur(10);
   int sonuc;
   sonuc=isempty(arraytype);
  printf("%d",sonuc);
 return 0;
}
