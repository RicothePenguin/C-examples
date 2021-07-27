#include <stdio.h>

int main() {
    int x,y;

    printf("Enter a random number between 0 and 10:\n");
    scanf("%d",&x);

    printf("If your number is odd enter 1 if not enter 0\n");
    scanf("%d",&y);

    if(y==1) {
        printf("Your number might be 1,3,5,7,9\n");
    }
    else if(y==0) {
        printf("Your number might be 0,2,4,6,8\n");
    }
    
    return 0;
}