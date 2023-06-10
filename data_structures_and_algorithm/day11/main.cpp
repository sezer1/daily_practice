#include <iostream>

using namespace std;

//Aramanın geliştirilmesi için tutulan bilginin veri yapısı modeli önemlidir. Başlangıçta tutulan bilginin hangi veri yapısında olacağı önemli
//bir problemdir.


int main()
{
   int A[5]={4,5,3,1,2};
   int x=3;

for(int i=0;i<5;i++){
    if(A[i]==x){
        printf("%d %d. indiste bulundu",x,i);
    }
}
    return 0;
}
