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


int main()
{

    SonaEkle(10);
    SonaEkle(5);
    BasaEkle(12);

    Listele();


    return 0;
}
