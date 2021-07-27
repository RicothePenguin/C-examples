#include <stdio.h>

int main() {

    int a,b,sum=1;

    printf("Enter a number:");
    scanf("%d",&a);

    printf("Enter power of number:");
    scanf("%d",&b);

    for(int i=0; i<b; i++) {

    sum *= a;
    b==0 ? sum=0:b==0;
    b==1 ? sum=a:b==1;
    }

    printf("%d^%d is %d",a,b,sum);
    printf("\n");

    return 0;
}
