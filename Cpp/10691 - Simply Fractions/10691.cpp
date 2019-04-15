#include <iostream>
using namespace std;

unsigned long long int ans_numer, ans_denom;

unsigned long long int gcd (unsigned long long int small, unsigned long long int big)
{
	if (small > big) return gcd (big, small);
	if (!small) return big;
	return gcd (big%small, small);
}

void simplize (unsigned long long int &n, unsigned long long int &d)
{
	if (!n) return;
	unsigned long long int g = gcd (n, d);
	n /= g;
	d /= g;
	return;
}

void add (unsigned long long int n, unsigned long long int d)
{
	simplize (n, d);
	if (!n) return;
	n *= ans_denom;
	ans_numer *= d;
	ans_numer += n;
	ans_denom *= d;
	simplize (ans_numer, ans_denom);
	return;
}

int main (void)
{
	int n;
	unsigned long long int numer, denom;

	while (cin >> n) {
		ans_numer = 0;
		ans_denom = 1;
		while (n--) {
			cin >> numer >> denom;
			add (numer, denom);
		}
		cout << ans_numer << '/' << ans_denom << '\n';
	}

	return 0;
}