#include <stdio.h>

int main()
{
    double g = 9.8 ;
    double h = 1 ;
    double R = 0.01435 ;
    double M,t ;

    printf("Input valur of 'M' and 't' : ");
    scanf("%lf %lf", &M,&t);

    double I ;

    I = M*R*R*(((g*t*t)/(2*h))-1);
    printf("Experimental value of Inertia Moment is %lf\n", I);

    double m = 116.6 ;
    double n = 466.4 ;
    double r1 = 0.0269 ;
    double r2 = 0.0382 ; 

    I = (0.5)*n*((r1*r1)+(r2*r2));
    printf("Theoretical value of Inertia Moment is %lf\n",I);

}