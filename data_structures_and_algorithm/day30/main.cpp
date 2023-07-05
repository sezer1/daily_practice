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

void ekle(struct Yigin* yigin,int sayi){
  yigin->dizi[yigin->SP]=sayi;
  yigin->SP+=1;
}


int main()
{
  struct Yigin *arraytype = (struct Yigin*)malloc(sizeof(Yigin));
   arraytype=yigin_olustur(10);
   int sonuc;
   ekle(arraytype,5);
   ekle(arraytype,10);
   printf("%d",arraytype->dizi[-1]);

 return 0;
}
