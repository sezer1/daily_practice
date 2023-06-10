#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

//selection sort

void swap(int *arrx, int *arry){
int temp = *arrx;
*arrx=*arry;
*arry=temp;
}

void print_array(int arr[],int MAX){
int i;
for(i=0;i<MAX;i++){
    printf("%d ",arr[i]);

}
}

void selection_sort(int arr[],int MAX){

int i,j,min_idx;
for(i=0;i<MAX-1;i++){
    min_idx=i;
    for(j=i+1;j<MAX;j++){
    if(arr[j]<arr[min_idx])
        min_idx=j;
    if(min_idx!=i){

        swap(&arr[min_idx],&arr[i]);
    }

    printf("Array:   ");
    print_array(arr,MAX);

    }
}
}



int main()
{
    int toplam=0;
   clock_t bas,son;
   int N=10;
   int dizi[N];
   srand(time(NULL));




   int MAX=sizeof(dizi)/sizeof(int);
   for(int i=0;i<MAX;i++)
    dizi[i]=rand()%65535;


   bas=clock();
   selection_sort(dizi,MAX);
   son=clock();

   printf("Sorted Array");
   print_array(dizi,MAX);
   toplam=son-bas;

   printf("süre %d",toplam);

    return 0;
}
