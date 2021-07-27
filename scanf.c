#include <stdio.h>

int Multiply(int a,int b,int c) {
    int sum;
    sum = a * b * c;

    return sum;
}
int main() {
    int x,y,z;

    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&x,&y,&z);

    printf("Multiply of your numbers:%d\n",Multiply(x,y,z));

    return 0;
}