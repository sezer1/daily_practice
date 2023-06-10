#include <iostream>

using namespace std;

int main()
{

   int a[5]={1,2,3,4,5};
   int b[5]={9,0,0,3,7};
   int c[6];
   int elde=0;

   for(int i=4;i >= 0;i--){
    c[i+1]=(a[i]+b[i]+elde)%10;
    elde=(a[i]+b[i]+elde)/10;
    if(i==0){
        c[i]=elde;
    }
  }


  for(int i=5;i>=0;i--){
 printf("%d\n",c[i]);
  }

    return 0;
}
