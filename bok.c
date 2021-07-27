#include <stdio.h>

int art1(int deger) {
    deger += 5;

    return deger;
}

int main() {
    int number1 = 5;

    number1 = art1(number1);
    printf("%d\n",number1);

    return 0;
}


