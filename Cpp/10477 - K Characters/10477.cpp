#include <iostream>
#include <map>
using namespace std;

map<char, int> M;
string last;

void histogram(string str, int k)
{
    for (char c='A'; c<='K'; c++) 
        M[c] = 0;
    for (auto s:str) {
        if (M[s]<k)
            M[s]++;
    }
}

void gen (char start, int k, string str)
{
	if (k > 0) {
		for (char c = start; c <= 'K';c++) {
			if (M[c] > 0) {
				M[c]--;
				string rstr(1, c);
				gen (c, k-1, str+rstr);
				M[c]++;
			}
		}
	} else {
		if (str != last) {
			last = str;
			cout << str << '\n';
		}
	}
}

int main (void)
{
	string str;
	int n, tc;
	while (cin >> tc) {
		while (tc--) {
			last = "";
			cin >> str;
			cin >> n;
			histogram (str, n);
			gen('A', n, "");
			cout << '\n';
		}
	}
	return 0;
}