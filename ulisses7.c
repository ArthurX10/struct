#include<stdio.h>
#include<math.h>

typedef struct{
	double r,theta;
	double x,y;

}Polar;

int main(){
	Polar polar;

	printf("Digite o valor do raio: ");
	scanf("%lf", &polar.r);
	printf("Digite o valor do theta: ");
	scanf("%lf", &polar.theta);

    polar.theta = polar.theta * M_PI/180.0;

	polar.x = polar.r * cos(polar.theta);
	polar.y= polar.r * sin(polar.theta);

	printf("\nCORDENADAS CARTESIANAS\n");
    printf("x = %.2lf\n", polar.x);
    printf("y= %.2lf\n", polar.y);

}
