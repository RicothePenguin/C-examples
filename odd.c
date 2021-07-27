#include <stdio.h>

int main() {
    int x;

    printf("Enter a number:\n");
    scanf("%d",&x);

    if(x%2==0) {
        printf("The number is Even\n");
    }
    else{  
        printf("The number is Odd\n");
    }
    return 0;
}