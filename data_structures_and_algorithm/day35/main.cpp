#include <iostream>

using namespace std;
//recursive tail-nontail
//53. dk

int kuyruk(int n,int m){
    if(n<=0)
    return 10;

    else
    {
        printf("%d %d\n",n,m);
        return kuyruk(n-1,kuyruk(n-1,m-1));
    }

}

int main()
{
   int n=3;
   kuyruk(n,120);

}
