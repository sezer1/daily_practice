#include <iostream>

using namespace std;
//matris diagonali 17.04 de 27.23






int main()
{
     int n;
     printf("matris eleman sayisini giriniz ");
     scanf("%d",&n);

     int matris[n][n];

    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){

        if(i==j){
            matris[i][j]=1;
        }
        else if(i>j){
            matris[i][j]=3;
        }
        else if(i<j){
            matris[i][j]=2;
    }

    }
    }


   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
   printf("%d",matris[i][j]);
    }
    printf("\n");
   }






    return 0;
}
