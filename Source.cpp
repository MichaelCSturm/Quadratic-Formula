#include <iostream>

#include <math.h>
using namespace std;
int main()
{
	int i = 0;
	while (i < 1000) {
double a;
	double b;
	double c;

	cout << "What are your coefficents? Write in the 'a b c' format." << endl;
	cin >> a >> b >> c;


	double firstPart = ((b * b) - (4 * a * c));
	if (firstPart >= 0) {
		;

		cout << " Answers," << (((-b + (sqrt(firstPart)))) / (2 * a)) << " and " << (((-b - (sqrt(firstPart)))) / (2 * a)) << endl;
	}
	else {
		
	
		cout << " Answer" << (((-b + (sqrt(-1 * firstPart)))) / (2 * a)) << " i " << endl;
	}
	}
	
}