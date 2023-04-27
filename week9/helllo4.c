#include <stdio.h>

#define PI 3.14159265358979323846

int main() {
    double radius, area;
    
    printf("반지름을 입력하시오: ");
    scanf("%lf", &radius);
    
    area = PI * radius * radius;
    
    printf("원의 면적: %.6lf", area);
    
    return 0;
}
