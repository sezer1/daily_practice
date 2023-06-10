#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int a,b,c;
    int delta;
    printf("ikinci dereceden elemanlarin degerlerini giriniz: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    delta= pow(b,2)-4*a*c;
    if(delta<0){
        printf("kök yok");
    }
    if(delta>=0){
       if(delta==0){
        printf("2 kök var");
       }
       else{
        int eksib=-1*b;
        int sonuc= eksib/2*a;
        printf("sonuc= %d",sonuc);
       }
    }



    return 0;
}
