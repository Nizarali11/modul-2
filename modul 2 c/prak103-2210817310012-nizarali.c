#include <stdio.h>
 
int main(){
    float a,b,x,y,jumlah;
    a = 9;
    b = 6;
    x = 10;
    y = 7;
    jumlah = (a+b)*x/y;                                                                                                 

    printf("variable a bernilai %.f \n",a);
    printf("variable b bernilai %.f \n",b);
    printf("variable x bernilai %.f \n",x);
    printf("variable y bernilai %.f \n",y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n",jumlah);
}
