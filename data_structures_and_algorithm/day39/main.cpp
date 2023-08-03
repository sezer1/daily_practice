#include <iostream>

using namespace std;

struct AGACDUGUMPTR{
int data;
struct AGACDUGUMPTR *sol;
struct AGACDUGUMPTR *sag;
};


AGACDUGUMPTR *dugumekle(AGACDUGUMPTR *agacptr,int veri){
 if(agacptr==NULL){
    agacptr=(AGACDUGUMPTR *)malloc(sizeof(AGACDUGUMPTR));
        if(agacptr!=NULL){
            agacptr->data=veri;
            agacptr->sol=NULL;
            agacptr->sag=NULL;
        }
        else{printf("%d eklenemedi",veri);}
 }
 else{
    if(veri<agacptr->data){
        printf("agacın soluna veri eklendi\n");
        agacptr->sol=dugumekle(agacptr->sol,veri);
    }else{
    if(veri>agacptr->data){
        printf("agacın sag tarafına veri eklendi");
        agacptr->sag=dugumekle(agacptr->sag,veri);
    }else printf("eşit olduğu için eklenemedi\n");
    }
 }

return agacptr;
}

void inorder(AGACDUGUMPTR *agacptr){
    if(agacptr !=NULL){
        inorder(agacptr->sol);
        printf("%3d",agacptr->data);
        inorder(agacptr->sag);

    }
}

void preorder(AGACDUGUMPTR *agacptr){
 if(agacptr !=NULL){
    preorder(agacptr->sol);
    preorder(agacptr->sol);
    printf("3d",agacptr->data);
}
}



int main()
{
    struct AGACDUGUMPTR *p= (AGACDUGUMPTR *)malloc(sizeof(AGACDUGUMPTR));
    p=dugumekle(p,15);
    p=dugumekle(p,3);
    p=dugumekle(p,12);
    p=dugumekle(p,7);
    p=dugumekle(p,9);
    p=dugumekle(p,42);
    p=dugumekle(p,11);
    inorder(p);


    cout << "Hello world!" << endl;
    return 0;
}
