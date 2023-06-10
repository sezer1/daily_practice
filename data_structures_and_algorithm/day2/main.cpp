#include <iostream>

using namespace std;

int main()
{
    int sayi;
    int dizi[100];
    int a;
    int i=0;
    printf("sayiyi giriniz ");
    scanf("%d",&sayi);

    while(sayi>2){
    a=sayi%2;
    sayi=sayi/2;
    dizi[i]=a;
    i++;
    }

    for(int j=0;j<=i;j++){
    printf("%d\n",dizi[j]);
    }

    return 0;
}
