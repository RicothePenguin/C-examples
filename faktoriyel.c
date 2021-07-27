#include <stdio.h>

int fakto(int f) {
    int ysum=1,i;

    for(i=1; i<=f; i++) ysum *= i;

    return ysum;
}

int main() {
    int x;
    printf("Enter a number and get its factoriel\n");
    scanf("%d",&x);

    printf("Entered number's factoriel: %d\n",fakto(x));

    return 0;
}
