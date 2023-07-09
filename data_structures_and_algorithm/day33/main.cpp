#include <iostream>
#include <string.h>

using namespace std;

struct Kisi
{
 char isim[10];
 struct Kisi *sonra;
};

struct Kisi *kok;

void Push()
{
 struct Kisi *yeni= (struct Kisi*)malloc(sizeof(struct Kisi));
 printf("yığına eklenecek isim:");
 scanf("%s",yeni->isim);
 if(yeni==NULL)
   printf("bellekte yer yok");
 else
    if(kok==NULL)
    {

        yeni->sonra=NULL;
        kok=yeni;

    }
    else
    {

        yeni->sonra=kok;
        kok=yeni;

    }
}

void Pop(){
 if(kok!=NULL){
    struct Kisi *sil;
    sil=kok;
    kok=kok->sonra;
    printf("%s yiginden cekiliyor\n",sil->isim);
    free(sil);
 }
 else
 {
     printf("yığın boş");
 }
}
void Liste(){

struct Kisi *listep;
 listep=kok;
 while(listep!=NULL){
    printf("%s",listep->isim);
    listep=listep->sonra;
 }
  printf("\n");
}


int main()
{
Push();
Liste();
Push();
Push();
Pop();
Pop();
Liste();
 return 0;
}
