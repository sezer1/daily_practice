
#include <iostream>

using namespace std;

struct node
{
int data;
struct node *next;
};

struct node *ilk, *son;

void SonaEkle(int veri){
struct node *yeni = (struct node*)malloc(sizeof(struct node));
yeni->data= veri;
yeni->next=NULL;
if(ilk==NULL){
    ilk=yeni;
    son=yeni;
}
else {
    son->next=yeni;
    son=yeni;
}
}

void Listele(){
struct node *liste;
liste=ilk;
while(liste!=NULL){
    printf("%d\t",liste->data);
    liste=liste->next;
}
printf("\n");
}

void BasaEkle(int veri){
struct node *yeni = (struct node*)malloc(sizeof(struct node));
yeni->data= veri;
yeni->next=NULL;
if(ilk==NULL){
    ilk=yeni;
    son=yeni;
}
else {
    yeni->next=ilk;
    ilk=yeni;
}
}

struct node *Ara(int a){

  struct node *ara=NULL;
  ara=ilk;
  while(ara!=NULL){
    if(ara->data==a)
        return ara;
        ara=ara->next;
    }
return NULL;

}




int main()
{
    SonaEkle(10);
    SonaEkle(5);
    BasaEkle(12);
    Listele();
    struct node *bul=Ara(12);
    if(bul!=NULL){
        printf("%d bulundu",bul->data);
    }

    return 0;
}
