#include <stdio.h>

int main() {
    char a;
    printf("Enter a character:\n");
    scanf("%c",&a);

    if((a>='a' && a<='z') || (a>='A' && a<='Z')) {
        printf("%c is an alphabet.\n",a);
    }
    else {
        printf("%c is not an alphabet.\n",a);
    }
    return 0;
}



