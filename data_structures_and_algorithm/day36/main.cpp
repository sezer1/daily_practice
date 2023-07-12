#include <iostream>

using namespace std;

void towers(int num,char frompeg, char topeg, char auxpeg){
if(num ==1){
    printf("\nDisk 1 %c plakadan %c plakaya taşı",frompeg,topeg);
    return;
}
 towers(num-1,frompeg,auxpeg,topeg);
 printf("\nDisk %d %c plakadan %c plakaya taşı",num, frompeg,topeg);
 towers(num-1,auxpeg,topeg,frompeg);

}



int main()
{
   int num;
   printf("disk sayısı: ");
   scanf("%d",&num);
   printf("Hanoi kulesi adımları:\n");
   towers(num, 'A','C','B');

    return 0;
}
