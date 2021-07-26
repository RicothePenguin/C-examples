 #include <stdio.h>
int multiply(int a,int b) {
    int sum;
    sum = a * b;
    return sum;
}

 int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Multiply of entered numbers:%d\n",multiply(x,y));
    return 0;
}