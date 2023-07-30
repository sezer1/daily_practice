#include <iostream>

using namespace std;
//recursive quicksort

int  pivot_selection(int *A, int ilk, int son){
    int i=ilk-1;
    int j=son;
    int v=A[ilk];
    int tmp;
    while(1){
        while(A[i]<=v && i<=son)
            i++;
        while(A[j]>v)
            j--;
        if(i>=j)
            break;
        tmp=A[i];
        A[ilk]=A[j];
        A[j]=tmp;
    }
    tmp=A[ilk];
    A[ilk]=A[j];
    A[j]=tmp;

    return j;
}

void quick_sort(int *A,int ilk, int son)
{
  if(son<=ilk)
  return;
  int j=pivot_selection(A,ilk,son);
  quick_sort(A,ilk,j-1);
  quick_sort(A,j+1,son);
}

int main()
{

 int A[]={10,4,9,6,2,15,12,17,13};
 printf("sirasiz: ");
 for(int i=0;i<8;i++){
    printf("%d ",A[i]);
 }

 quick_sort(A,0,7);

 printf("\nsiralanmis: ");
 for(int i=0;i<8;i++){
    printf("%d ",A[i]);
 }
 printf("\n");

 return 0;
}
