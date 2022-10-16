#include <stdio.h>
int main(){
    float a,b,x,y,hasila,hasilb;
    a = 400000;
    b = 350000;
    x = 13;
    y = 21;
    hasila = (a-x/100*a);
    hasilb = (b-y/100*b);
    printf("harga sepatu A adalah %.f \n",a);
     printf("harga sepatu B adalah %.f \n",b);

       printf("Sepatu A mendapatkan diskon 13 sehingga harganya menjadi %.f\n",hasila);
        printf("Sepatu A mendapatkan diskon 21 sehingga hasilnya %.f\n",hasilb);
}
