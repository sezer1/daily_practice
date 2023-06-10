#include <iostream>

using namespace std;

int main()
{

    int dizi[]={5,3,12,11,15,3,12,7,5,4,2};
    int n=1;
    int byk,kck;

   byk=dizi[0];
   kck=dizi[0];

    for(int i=1;dizi[i]!='\0';i++){
        if(byk<dizi[i])
        byk=dizi[i];
        if(kck>dizi[i])
            kck=dizi[i];

    }




  printf("%d\n",kck);
    printf("%d",byk);

    return 0;
}
