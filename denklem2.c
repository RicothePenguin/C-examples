#include <stdio.h>
#include <math.h>

int main() {
    int a=2,b,c;
    float x1,x2,tri;
    
    printf("Enter parameters of equation:");
    scanf("%d %d %d",&a,&b,&c);

    tri = b*b - 4*a*c;
    printf("Discriminant of equation:%f",tri);

    x1 = (-b + (sqrt(tri)) ) / 2*a;
    x2 = (-b - (sqrt(tri)) ) / 2*a;

    printf("Roots of equation => x1:%f x2:%f\n",x1,x2);

    return 0;  
}