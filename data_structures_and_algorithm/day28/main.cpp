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



int main()
{
  struct Yigin *arraytype = (struct Yigin*)malloc(sizeof(Yigin));
   arraytype=yigin_olustur(10);


 return 0;
}
