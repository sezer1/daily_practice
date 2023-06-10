#include <iostream>

using namespace std;
// dakika ortalardan daha ileride, büyüklük sırası farklı olduğunda nasıl çözersin?

int main()
{
   int A[6]={7,4,12,19,3,8};
   int B[6];
   int temp;
    int buyuk;

   for(int i=0;i<6;i++){
        buyuk=0;
    for(int j=0;j<6;j++){
      if(A[j]>A[i])
        buyuk++;
    }
    B[i]=6-buyuk;

   }


for(int i=0;i<6;i++){
    printf("%d\n",B[i]);
}





    return 0;
}
