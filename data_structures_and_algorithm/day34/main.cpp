#include <iostream>

using namespace std;

int function1(int sayi);
int function2(int sayi);
int function3(int sayi);

int function1(int sayi){
        if(sayi<1)
        return 0;
        function2(sayi-1);
        printf("1");
}
int function2(int sayi){
        if(sayi<1)
        return 0;
        function3(sayi-1);
        printf("2");
}

int function3(int sayi){
        if(sayi<1)
        return 0;
        function1(sayi-1);
        printf("3");

}

int factorial(int n){
if(n<=1){
    return 1;
}else{
return n*factorial(n-1);
}
}



int main()
{
  int a=5;
  function1(a);
  printf("\n%d",factorial(4));

    return 0;
}
