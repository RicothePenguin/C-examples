#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int a;
    srand(time(NULL));

    for(int i=0; i<1000; ++i) {
        a = rand() % 100;

        if(a==31) {
            printf("%d. denemede %d çikti sj\n",i,a);
            break;
        }
    }
    return 0;
}
