#include <iostream>

using namespace std;

struct Kisi
{
 char isim[10];
};

int kapasite=10;
struct Kisi yigin[10];
int SP;

int DoluMu(){
   if(SP<kapasite)
     return 1;
   else
    return 0;
}
int BosMu(){
  if(SP>=0)
    return 1;
  else
    return 0;

}


void Pop(){
    if(BosMu()){
        printf("%s. eleman çekiliyor",yigin[SP].isim);
        SP--;
    }
   else{
    printf("yiginda eleman yok");
   }

}



void Push()
{
    if(DoluMu()){
        SP++;
        scanf("%s",yigin[SP].isim);
    }
    else
        printf("yığın dolu");
}
void Liste(){

for(int i=0;i<=SP;i++){
    printf("%s",yigin[i].isim);
}
}





int main()
{
  Push();
Push();
Push();
Liste();

 return 0;
}
