#include <stdio.h>

int main() {
    int kalan,iq;

    printf("Iq nuzu giriniz:");
    scanf("%d",&iq);

    if(iq < 15) {
        printf("iq nuz yetersiz.\n");
    }
    else if(iq == 15) {
        printf("iq nuz sıradan.\n");
    }
    else if(iq > 15) {
        kalan = iq - 15;
        printf("iq nuz %d cm fazla hll.\n",kalan);
    }

    return 0;
}
