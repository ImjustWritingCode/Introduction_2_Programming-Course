#include <iostream>
#include "function.h"
using namespace std;

Polynomial::Polynomial(void){
	greatestPower = -1;
	for (int i = 0;i < 101;i++) coefficients[i] = 0;
}

Polynomial::Polynomial (const int gp, const int poly[51])
{
	greatestPower = gp;
	for (int i = 0;i < 101;i++) {
		if (i < 51) coefficients[i] = poly[i];
		else coefficients[i] = 0;
	} 
}

Polynomial Polynomial::add (const Polynomial b) const
{
	Polynomial c;
	int i;
	c.greatestPower = (greatestPower > b.greatestPower) ? greatestPower : b.greatestPower;
	int min = (greatestPower < b.greatestPower) ? greatestPower : b.greatestPower;
	for (i = 0;i <= min;i++) c.coefficients[i] = coefficients[i] + b.coefficients[i];
	while (i <= c.greatestPower) {
		c.coefficients[i] = (greatestPower > b.greatestPower) ? coefficients[i] : b.coefficients[i];
		i++;
	}
	return c;
}

Polynomial Polynomial::subtract (const Polynomial b) const
{
	Polynomial c;
	int i;
	c.greatestPower = (greatestPower > b.greatestPower) ? greatestPower : b.greatestPower;
	int min = (greatestPower < b.greatestPower) ? greatestPower : b.greatestPower;
	for (i = 0;i <= min;i++) c.coefficients[i] = coefficients[i] - b.coefficients[i]; 
	while (i <= c.greatestPower) {
		c.coefficients[i] = (greatestPower > b.greatestPower) ? coefficients[i] : -b.coefficients[i];
		i++;
	}
	return c;
}

Polynomial Polynomial::multiplication (const Polynomial b) const
{
	Polynomial c;
	c.greatestPower = greatestPower + b.greatestPower;
	for (int i = 0;i <= greatestPower;i++)
		for (int j = 0;j <= b.greatestPower;j++) c.coefficients[i+j] += coefficients[i] * b.coefficients[j];
	return c;
}

void Polynomial::output (void) const
{
	cout << coefficients[greatestPower];
	for (int i = greatestPower-1;i >= 0;i--)
		cout << " " << coefficients[i];
	cout << endl;
	return;
}