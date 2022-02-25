#include <stdio.h>
#include <stdlib.h>
#define PI 3.141593

float hoop(float y);

int main()
{
    float r;
    printf("enter the radius of the circle : ");
    scanf("%f",&r);
    printf("area of the circle : %f",hoop(r));
}

float hoop(float y)
{

    return(PI*y*y);

}
