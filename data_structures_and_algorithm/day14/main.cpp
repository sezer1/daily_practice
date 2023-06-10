#include <iostream>
#include <time.h>
using namespace std;
//43.41 de kaldı ilk video

void gnomeSort(int *arr,int n){
 int index =0;

 while (index<n){
    if(index ==0)
        index++;
    if(arr[index]>=arr[index-1])
        index++;
    else {
        int temp;
        temp=arr[index];
        arr[index]=arr[index-1];
        arr[index-1]=temp;
        index--;
    }

 }

return ;


}

int main()
{
 clock_t bas,son;
 int N=10000;
 int dizi[N];
 srand(time(NULL));

 for(int i=0;i<N;i++){
    dizi[i]=rand()%65535;
 }

 gnomeSort(dizi,N);


 for(int i=0;i<N;i++){
   printf("%d \t",dizi+i);
 }


    return 0;
}
