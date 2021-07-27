#include <stdio.h>
#include <string.h>

struct adsoyad {
    char ad[20];
    char soyad[20];
} yd;


int main() {
    printf("Adinizi giriniz:\n");
    scanf("%s",yd.ad);

    printf("Soyadinizi giriniz:\n");
    scanf("%s",yd.soyad);

    printf("Girdiginiz ad:%s\n",yd.ad);
    printf("Girdiginiz soyad:%s \n",yd.soyad);

    return 0;
}
