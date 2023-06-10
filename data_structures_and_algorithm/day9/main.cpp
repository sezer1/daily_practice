#include <iostream>

using namespace std;

//buble sort
//Big(O) complexity n^2

int main()
{
    int A[10]={4,3,1,11,6,12,5,82,21,22};
    int temp;
//advantage of bublesort is knowing the array whether it has completed or not
    for(int i=0;i<9;i++){
       int cont=0;
        for(int j=0;j<10;j++){
            if(A[j]>A[j+1]){
             temp=A[j+1];
             A[j+1]=A[j];
             A[j]=temp;
             cont =1;
            }

        }
          if(cont==0){
                    printf("sorting completed\n");
                break;
            }
    }

    for(int i=0;i<=10;i++){
        printf("%d\n",A[i]);
    }

    return 0;
}
