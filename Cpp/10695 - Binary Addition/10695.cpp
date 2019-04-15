#include <iostream>
using namespace std;

int main (void)
{
	int tc, digit, c_in;
	string num1, num2;

	cin >> tc;
	while (tc--) {
		cin >> digit;
		cin >> num1 >> num2;
		c_in = 0;
		for (int i = digit-1;i >= 0;i--) {
			num1[i] = num1[i] + num2[i] - '0' + c_in;
			if (num1[i] > '1') {
				num1[i] -= 2;
				c_in = 1;
			} else c_in = 0;
		}
		cout << num1 << endl;
	}

	return 0;
}