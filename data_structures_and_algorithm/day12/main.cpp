#include <iostream>

using namespace std;


//Dizi sıralı olması koşuluyla uygulanabilir
//log2^N
//binarysearch


int main()
{
    int A[8]={35,25,22,14,13,6,3,1};
    int orta,alt,ust;
    int aranan;
    alt=0;
    int N=sizeof(A)/sizeof(int);

    ust=N-1;
    printf("aranan sayiyi giriniz= ");scanf("%d ",&aranan);

    orta=(ust+alt)/2;

    if(A[orta]==aranan){
   if(aranan<A[orta]){
        alt=orta+1;
   }
   else if(aranan>A[orta]){
    ust=orta-1;
   }
   if(alt<=ust){
    printf("aranan eleman yok");
    break;
   }
     orta=(ust+alt)/2;
  if(A[orta]==aranan){
    printf("%d %d. indextedir",aranan,orta);
   }
    }else{
    printf("%d %d. indextedir",aranan,orta);
    }




    return 0;
}
