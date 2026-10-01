
#include "burka.h"


using namespace std;

int main()
{
	double cas;
	double vzdalenost;
	const double rychlost = 340.;
	printf("zadej sekundy do blesku \n");
	scanf_s("%lf", &cas);
	vzdalenost = cas * rychlost;


	
	printf("vzdalenost: %lf", vzdalenost);
	return 0;
}
/*
#include "burka.h"


using namespace std;
double funk(double& c1, double const& c2);
int main()
{
	double cas;
	double vzdalenost;
	const double rychlost = 340.;
	printf("zadej sekundy do blesku \n");
	scanf_s("%lf", &cas);
	//vzdalenost = cas * rychlost;
	vzdalenost = funk(cas, rychlost);



	printf("vzdalenost: %lf", vzdalenost);
	return 0;
}

double funk(double& c1, double const& c2) {
	double rethod = 0;
	rethod = c1 * c2;
	return rethod;

}*/
