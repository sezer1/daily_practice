#include <iostream>

using namespace std;

//bu yapıları doldur
//


struct Yigin
{
  int SP;
  unsigned kapasite;
  int* dizi;
};

struct Yigin* YiginOlustur(unsigned kapasite) {
     struct Yigin *yigin=(struct Yigin*)malloc(sizeof(Yigin));
     yigin->kapasite=kapasite;
     yigin->SP=-1;
     yigin->dizi=(int*)malloc(yigin->kapasite*sizeof(int));
     return yigin;
};

int main()
{
    struct Yigin *yigin = (struct Yigin*)malloc(sizeof(Yigin));
    yigin=YiginOlustur(10);

    printf("%d",yigin->SP);



    return 0;
}
