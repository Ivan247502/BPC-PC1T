// CMake_vektor.cpp : Defines the entry point for the application.
//

#include "CMake_vektor.h"
#include <vector>

using namespace std;

int main()
{
	double A1, A2, B1, B2,C1,C2;

	printf("zadej cislo pro vector1 \n");
	scanf_s("%lf %lf", &A1, &A2);
	//printf("zadej cislo pro vector1 pozice 2 \n");
	//scanf_s("%lf", &A2);
	printf("zadej cisla pro vector2  \n");
	scanf_s("%lf %lf", &B1, &B2);
	//printf("zadej cislo pro vector2 pozice 2 \n");
	//scanf_s("%lf", &B2);
	vector<double> VectA = {A1, A2};
	vector<double> VectB = { B1, B2 };

	printf("vector1: ( %lf ; %lf) \n",A1,A2 );
	printf("vector2: ( %lf ; %lf) \n", B1, B2);


	C1 = A1 - B1;
	C2 = A2 - B2;
	printf("vector1-vector2: ( %lf ; %lf) \n", C1, C2);










	
	return 0;
}