#include <iostream>

using namespace std;

int main()
{
    int j=0;
    int i=0;
    int a=0;
    int x=0;
    int A[6]={1,5,12,16,25,28};
    int B[4]={6,7,15,18};
    int C[10];


      while(A[i]!='\0'){
     if(B[j]!='\0'){
        if(B[j]>A[i])
            {
            C[a]=A[i];
        i+=1;
        a++;
            }
        else{
            C[a]=B[j];
            j+=1;
            a++;
            }
     }
     else{
         x=a;

            for(x;A[i]!='\0';x++){

                    C[x]=A[i];
++i;

            }

     }


      }

 for(int i=0;i<10;i++){
    printf("%d\n",C[i]);
 }



    return 0;
}
