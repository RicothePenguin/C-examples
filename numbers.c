#include <stdio.h>

int main() {

    int a,b,c;

    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    
    printf("a = %d\nb = %d\n",a *= (b *= c),--b);

    return 0;
}